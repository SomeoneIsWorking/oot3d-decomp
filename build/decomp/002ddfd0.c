// OoT3D decomp @ 002ddfd0  name=FUN_002ddfd0  size=576

void FUN_002ddfd0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;

  uVar4 = DAT_002de210;
  uVar2 = DAT_002de210;
  if (param_1 != 0) {
    uVar4 = DAT_002de214;
    uVar2 = DAT_002de218;
  }
  uVar1 = FUN_0030f0ec();
  FUN_0030f0c0(uVar1,0x4000000);
  FUN_002d3d44(uVar2);
  uVar1 = FUN_0030f0ec();
  uVar1 = FUN_0030f0c0(uVar1,0x4000000);
  FUN_0030efb0(uVar1,DAT_002de21c,0);
  uVar1 = FUN_0030f0ec();
  FUN_0030f0c0(uVar1,0x4000001);
  FUN_002d3d44(uVar2);
  uVar1 = FUN_0030f0ec();
  uVar1 = FUN_0030f0c0(uVar1,0x4000001);
  FUN_0030efb0(uVar1,DAT_002de21c,0);
  uVar1 = FUN_0030f0ec();
  FUN_0030f0c0(uVar1,0x4000002);
  FUN_002d3d44(uVar2);
  uVar1 = FUN_0030f0ec();
  uVar1 = FUN_0030f0c0(uVar1,0x4000002);
  FUN_0030efb0(uVar1,DAT_002de21c,0);
  uVar1 = FUN_0030f0ec();
  FUN_0030f0c0(uVar1,0x4000003);
  FUN_002d3d44(uVar2);
  uVar1 = FUN_0030f0ec();
  uVar1 = FUN_0030f0c0(uVar1,0x4000003);
  FUN_0030efb0(uVar1,DAT_002de21c,0);
  uVar1 = FUN_0030f0ec();
  uVar3 = DAT_002de220;
  FUN_0030f0c0(uVar1,DAT_002de220);
  FUN_002d3d44(uVar2);
  uVar1 = FUN_0030f0ec();
  uVar1 = FUN_0030f0c0(uVar1,uVar3);
  FUN_0030efb0(uVar1,DAT_002de21c,0);
  uVar1 = FUN_0030f0ec();
  FUN_0030f0c0(uVar1,uVar3 + 1);
  FUN_002d3d44(uVar2);
  uVar2 = FUN_0030f0ec();
  uVar2 = FUN_0030f0c0(uVar2,uVar3);
  FUN_0030efb0(uVar2,DAT_002de21c,0);
  uVar3 = uVar3 | (int)uVar3 >> 0x19;
  if (param_1 == 0) {
    uVar2 = FUN_0030f0ec();
    uVar2 = FUN_0030f0c0(uVar2,uVar3);
    uVar1 = 5;
  }
  else {
    uVar2 = FUN_0030f0ec();
    uVar2 = FUN_0030f0c0(uVar2,uVar3);
    uVar1 = 0;
  }
  FUN_00453fcc(uVar2,param_1 != 0,uVar1);
  uVar2 = FUN_0030f0ec();
  FUN_0030f0c0(uVar2,DAT_002de224);
  FUN_002d3d44(uVar4);
  uVar2 = FUN_0030f0ec();
  FUN_0030f0c0(uVar2,DAT_002de228);
  FUN_002d3d44(uVar4);
  return;
}
