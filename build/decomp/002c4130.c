// OoT3D decomp @ 002c4130  name=FUN_002c4130  size=124

undefined4
FUN_002c4130(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined1 auStack_34 [20];
  undefined1 auStack_20 [20];
  
  *(undefined4 *)(param_1 + 0x170) = param_3;
  *(undefined4 *)(param_1 + 0x16c) = param_2;
  *(short *)(param_1 + 0x174) = (short)param_5;
  if (param_5 != 0) {
    *(undefined4 *)(param_1 + 0xd8) = param_4;
    FUN_00331764(auStack_34);
    FUN_00371738(auStack_20,auStack_34,0x12);
    FUN_00371738(param_1 + 0xdc,auStack_20,0x12);
    uVar1 = uRam002c41ac;
    *(undefined4 *)(param_1 + 0x120) = uRam002c41ac;
    *(undefined4 *)(param_1 + 0x128) = uVar1;
    *(undefined2 *)(param_1 + 0x19e) = 0xffff;
  }
  return 1;
}

