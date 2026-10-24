#include "game_backend.hpp"
#include "fake_il2cpp.hpp"
#include <cassert>
#include <stdexcept>
#include <string>
int main(){
std::cout << "EXEC: " << 'static_assert(vt::FeatureCount==3);' << std::endl;
    static_assert(vt::FeatureCount==3);
std::cout << "EXEC: " << 'bool rejected=false;' << std::endl;
    bool rejected=false;
std::cout << "EXEC: " << 'try{vt::ios::GameBackend missing([](const char*)->void*{return nullptr;});}' << std::endl;
    try{vt::ios::GameBackend missing([](const char*)->void*{return nullptr;});}
std::cout << "EXEC: " << 'catch(const std::exception&e){rejected=std::string(e.what()).find("Missing il2cpp_domain_get")!=std::string::npos;}' << std::endl;
    catch(const std::exception&e){rejected=std::string(e.what()).find("Missing il2cpp_domain_get")!=std::string::npos;}
std::cout << "EXEC: " << 'assert(rejected);' << std::endl;
    assert(rejected);
std::cout << "EXEC: " << 'using namespace fake;' << std::endl;
    using namespace fake;
std::cout << "EXEC: " << 'auto&ac=cls("ActorCharacter");auto&base=cls("ActorControl");auto&cc=cls("ActorDefaultControlPlayer");cc.parent=&base;' << std::endl;
    auto&ac=cls("ActorCharacter");auto&base=cls("ActorControl");auto&cc=cls("ActorDefaultControlPlayer");cc.parent=&base;
std::cout << "EXEC: " << 'auto&kmgBase=cls("ActorMiniGameControl");kmgBase.parent=&base;' << std::endl;
    auto&kmgBase=cls("ActorMiniGameControl");kmgBase.parent=&base;
std::cout << "EXEC: " << 'auto&kmg=cls("ActorKMGPlayer");kmg.parent=&kmgBase;' << std::endl;
    auto&kmg=cls("ActorKMGPlayer");kmg.parent=&kmgBase;
std::cout << "EXEC: " << 'auto&actorControl=field(ac,"actorControl",0x12,8);auto&uid=field(ac,"<SUID>k__BackingField",0x0a,8);' << std::endl;
    auto&actorControl=field(ac,"actorControl",0x12,8);auto&uid=field(ac,"<SUID>k__BackingField",0x0a,8);
std::cout << "EXEC: " << 'auto&actorBase=field(base,"actorBase",0x12,8);auto&terminate=field(base,"_terminate",2,1);' << std::endl;
    auto&actorBase=field(base,"actorBase",0x12,8);auto&terminate=field(base,"_terminate",2,1);
std::cout << "EXEC: " << 'auto&canJump=field(cc,"_canJump",2,1);' << std::endl;
    auto&canJump=field(cc,"_canJump",2,1);
std::cout << "EXEC: " << 'auto&kmgCanJump=field(kmgBase,"<IsCanJump>k__BackingField",2,1);' << std::endl;
    auto&kmgCanJump=field(kmgBase,"<IsCanJump>k__BackingField",2,1);
std::cout << "EXEC: " << 'auto&kmgGoal=field(kmgBase,"<IsGoalIn>k__BackingField",2,1);' << std::endl;
    auto&kmgGoal=field(kmgBase,"<IsGoalIn>k__BackingField",2,1);
std::cout << "EXEC: " << 'auto&transform=field(ac,"baseTransfrom",0x12,8);field(cls("ActorSystem"),"Self",0x12,8);' << std::endl;
    auto&transform=field(ac,"baseTransfrom",0x12,8);field(cls("ActorSystem"),"Self",0x12,8);
std::cout << "EXEC: " << 'Object sys{&cls("ActorSystem")},act{&ac},control{&cc},nextActor{&ac},nextControl{&cc},kmgControl{&kmg};' << std::endl;
    Object sys{&cls("ActorSystem")},act{&ac},control{&cc},nextActor{&ac},nextControl{&cc},kmgControl{&kmg};
std::cout << "EXEC: " << 'Object tr{&cls("Transform","UnityEngine")},cam{&cls("Camera","UnityEngine")};camera=&cam;' << std::endl;
    Object tr{&cls("Transform","UnityEngine")},cam{&cls("Camera","UnityEngine")};camera=&cam;
    // ActorControl is a System.Object, NOT a UnityEngine.Object: even when op_Implicit(control) is false,
    // currentControl(actor) and AutoJump must still work via actorBase + _terminate validation.
std::cout << "EXEC: " << 'control.alive=false;nextControl.alive=false;kmgControl.alive=false;' << std::endl;
    control.alive=false;nextControl.alive=false;kmgControl.alive=false;
std::cout << "EXEC: " << 'fake::system=&sys;actor=&act;set(act,actorControl,&control);set(act,uid,std::int64_t(42));' << std::endl;
    fake::system=&sys;actor=&act;set(act,actorControl,&control);set(act,uid,std::int64_t(42));
std::cout << "EXEC: " << 'set(control,actorBase,&act);set(control,terminate,false);set(control,canJump,false);set(act,transform,&tr);' << std::endl;
    set(control,actorBase,&act);set(control,terminate,false);set(control,canJump,false);set(act,transform,&tr);
std::cout << "EXEC: " << 'set(nextActor,actorControl,&nextControl);set(nextActor,uid,std::int64_t(43));' << std::endl;
    set(nextActor,actorControl,&nextControl);set(nextActor,uid,std::int64_t(43));
std::cout << "EXEC: " << 'set(nextControl,actorBase,&nextActor);set(nextControl,terminate,false);set(nextControl,canJump,false);set(nextActor,transform,&tr);' << std::endl;
    set(nextControl,actorBase,&nextActor);set(nextControl,terminate,false);set(nextControl,canJump,false);set(nextActor,transform,&tr);
std::cout << "EXEC: " << 'set(kmgControl,actorBase,&nextActor);set(kmgControl,terminate,false);set(kmgControl,kmgCanJump,false);set(kmgControl,kmgGoal,false);' << std::endl;
    set(kmgControl,actorBase,&nextActor);set(kmgControl,terminate,false);set(kmgControl,kmgCanJump,false);set(kmgControl,kmgGoal,false);
    {
std::cout << "EXEC: " << 'vt::ios::GameBackend backend(resolve);vt::ios::Model m;' << std::endl;
        vt::ios::GameBackend backend(resolve);vt::ios::Model m;
std::cout << "EXEC: " << 'm.available.fill(true);m.connected=m.controlsAllowed=true;m.jumpIntervalMs=20;' << std::endl;
        m.available.fill(true);m.connected=m.controlsAllowed=true;m.jumpIntervalMs=20;
std::cout << "EXEC: " << 'backend.toggle(m,vt::SpamJump);backend.tick(m,0);assert(jumps==1&&lastJumpTarget==&control&&m.player=="42");' << std::endl;
        backend.toggle(m,vt::SpamJump);backend.tick(m,0);assert(jumps==1&&lastJumpTarget==&control&&m.player=="42");
std::cout << "EXEC: " << 'assert(lastCanJumpDuringOnJump==true&&get<bool>(control,canJump)==false); // _canJump lifted during OnJump and restored after' << std::endl;
        assert(lastCanJumpDuringOnJump==true&&get<bool>(control,canJump)==false); // _canJump lifted during OnJump and restored after
std::cout << "EXEC: " << 'backend.tick(m,.01);assert(jumps==1);backend.tick(m,.02);assert(jumps==2);' << std::endl;
        backend.tick(m,.01);assert(jumps==1);backend.tick(m,.02);assert(jumps==2);
std::cout << "EXEC: " << 'backend.tick(m,20);assert(jumps==3); // No catch-up burst after a long gap.' << std::endl;
        backend.tick(m,20);assert(jumps==3); // No catch-up burst after a long gap.
std::cout << "EXEC: " << 'backend.tick(m,20);assert(jumps==3);' << std::endl;
        backend.tick(m,20);assert(jumps==3);
std::cout << "EXEC: " << 'm.jumpIntervalMs=0;backend.tick(m,20.02);assert(jumps==4);' << std::endl;
        m.jumpIntervalMs=0;backend.tick(m,20.02);assert(jumps==4);
std::cout << "EXEC: " << 'backend.tick(m,20.02);assert(jumps==4); // Zero delay still never spins.' << std::endl;
        backend.tick(m,20.02);assert(jumps==4); // Zero delay still never spins.
std::cout << "EXEC: " << 'backend.tick(m,20.04);assert(jumps==5);' << std::endl;
        backend.tick(m,20.04);assert(jumps==5);
std::cout << "EXEC: " << 'backend.toggle(m,vt::SpamJump);backend.tick(m,21);assert(jumps==5);' << std::endl;
        backend.toggle(m,vt::SpamJump);backend.tick(m,21);assert(jumps==5);
std::cout << "EXEC: " << 'backend.toggle(m,vt::Esp);backend.toggle(m,vt::Line);backend.tick(m,22);' << std::endl;
        backend.toggle(m,vt::Esp);backend.toggle(m,vt::Line);backend.tick(m,22);
std::cout << "EXEC: " << 'assert(jumps==5&&backend.esp().empty()&&backend.route().empty());' << std::endl;
        assert(jumps==5&&backend.esp().empty()&&backend.route().empty());
std::cout << "EXEC: " << 'backend.toggle(m,vt::SpamJump);backend.tick(m,23);assert(jumps==6);' << std::endl;
        backend.toggle(m,vt::SpamJump);backend.tick(m,23);assert(jumps==6);
std::cout << "EXEC: " << 'set(control,terminate,true);backend.tick(m,24);assert(jumps==6);' << std::endl;
        set(control,terminate,true);backend.tick(m,24);assert(jumps==6);
std::cout << "EXEC: " << 'set(control,terminate,false);backend.tick(m,25);assert(jumps==7);' << std::endl;
        set(control,terminate,false);backend.tick(m,25);assert(jumps==7);
std::cout << "EXEC: " << 'act.alive=false;backend.tick(m,26);assert(jumps==7&&m.player.empty()&&roots.empty());' << std::endl;
        act.alive=false;backend.tick(m,26);assert(jumps==7&&m.player.empty()&&roots.empty());
std::cout << "EXEC: " << 'actor=&nextActor;backend.tick(m,27);assert(jumps==7&&m.player=="43"); // scene gap holds the new scene for a moment' << std::endl;
        actor=&nextActor;backend.tick(m,27);assert(jumps==7&&m.player=="43"); // scene gap holds the new scene for a moment
std::cout << "EXEC: " << 'backend.tick(m,27.8);assert(jumps==8&&lastJumpTarget==&nextControl);' << std::endl;
        backend.tick(m,27.8);assert(jumps==8&&lastJumpTarget==&nextControl);
        // Switch to ActorKMGPlayer and test goal stop
std::cout << "EXEC: " << 'set(nextActor,actorControl,&kmgControl);' << std::endl;
        set(nextActor,actorControl,&kmgControl);
std::cout << "EXEC: " << 'backend.tick(m,27.9);assert(jumps==9&&lastJumpTarget==&kmgControl);' << std::endl;
        backend.tick(m,27.9);assert(jumps==9&&lastJumpTarget==&kmgControl);
std::cout << "EXEC: " << 'set(kmgControl,kmgGoal,true);' << std::endl;
        set(kmgControl,kmgGoal,true);
std::cout << "EXEC: " << 'backend.tick(m,28.0);assert(jumps==9&&m.status.find("đã về đích")!=std::string::npos);' << std::endl;
        backend.tick(m,28.0);assert(jumps==9&&m.status.find("đã về đích")!=std::string::npos);
std::cout << "EXEC: " << 'set(kmgControl,kmgGoal,false);' << std::endl;
        set(kmgControl,kmgGoal,false);
std::cout << "EXEC: " << 'set(nextActor,actorControl,&nextControl);' << std::endl;
        set(nextActor,actorControl,&nextControl);
std::cout << "EXEC: " << 'jumpException=true;backend.tick(m,28.2);assert(jumps==9&&m.enabled[vt::SpamJump]);' << std::endl;
        jumpException=true;backend.tick(m,28.2);assert(jumps==9&&m.enabled[vt::SpamJump]);
std::cout << "EXEC: " << 'assert(m.status.find("raised an exception")!=std::string::npos);' << std::endl;
        assert(m.status.find("raised an exception")!=std::string::npos);
std::cout << "EXEC: " << 'jumpException=false;backend.tick(m,28.3);assert(jumps==9);backend.tick(m,28.5);assert(jumps==10);' << std::endl;
        jumpException=false;backend.tick(m,28.3);assert(jumps==9);backend.tick(m,28.5);assert(jumps==10);
std::cout << "EXEC: " << 'backend.tick(m,.1);assert(jumps==11); // Clock rollback resets the schedule.' << std::endl;
        backend.tick(m,.1);assert(jumps==11); // Clock rollback resets the schedule.
std::cout << "EXEC: " << 'm.jumpIntervalMs=-1;backend.tick(m,.2);assert(jumps==11&&m.status.find("Invalid spam interval")!=std::string::npos);' << std::endl;
        m.jumpIntervalMs=-1;backend.tick(m,.2);assert(jumps==11&&m.status.find("Invalid spam interval")!=std::string::npos);
std::cout << "EXEC: " << 'backend.stop(m);backend.tick(m,30);assert(jumps==11&&!m.enabled[vt::Esp]&&!m.enabled[vt::Line]&&!m.enabled[vt::SpamJump]);' << std::endl;
        backend.stop(m);backend.tick(m,30);assert(jumps==11&&!m.enabled[vt::Esp]&&!m.enabled[vt::Line]&&!m.enabled[vt::SpamJump]);
std::cout << "EXEC: " << 'backend.stop(m);assert(roots.empty());' << std::endl;
        backend.stop(m);assert(roots.empty());
std::cout << "EXEC: " << 'backend.toggle(m,vt::FeatureCount);assert(!m.enabled[0]&&!m.enabled[1]&&!m.enabled[2]);' << std::endl;
        backend.toggle(m,vt::FeatureCount);assert(!m.enabled[0]&&!m.enabled[1]&&!m.enabled[2]);
std::cout << "EXEC: " << 'm.connected=false;backend.tick(m,31);assert(roots.empty());' << std::endl;
        m.connected=false;backend.tick(m,31);assert(roots.empty());
    }
std::cout << "EXEC: " << 'assert(roots.empty());' << std::endl;
    assert(roots.empty());
}