// OoT3D decomp @ 0033cb1c  name=FUN_0033cb1c  size=112

void FUN_0033cb1c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 auStack_20 [20];
  
  *(undefined4 *)(param_1 + 0x16c) = param_2;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(ushort *)(param_1 + 0x174) = (ushort)param_4 | 4;
  *(undefined2 *)(param_1 + 0x1a6) = 0;
  if (param_4 != 0) {
    *(undefined4 *)(param_1 + 0xd8) = param_3;
    FUN_00331764(auStack_20);
    FUN_00371738(param_1 + 0xdc,auStack_20,0x12);
    uVar1 = uRam0033cb8c;
    *(undefined4 *)(param_1 + 0x120) = uRam0033cb8c;
    *(undefined4 *)(param_1 + 0x128) = uVar1;
    *(undefined2 *)(param_1 + 0x19e) = 0xffff;
  }
  return;
}

