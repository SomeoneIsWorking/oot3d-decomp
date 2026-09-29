// OoT3D decomp @ 00217d50  name=FUN_00217d50  size=164

void FUN_00217d50(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),10,
               (int)(short)(int)*(float *)(param_1 + 0xa34));
  FUN_00373500(DAT_00217dfc,DAT_00217df8,DAT_00217df4,param_1 + 0xa34);
  iVar1 = DAT_00217e00;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  uVar2 = DAT_00217e08;
  if (*(int *)(param_1 + 0x98) < iVar1) {
    *(undefined4 *)(param_1 + 0x6c) = DAT_00217e04;
    FUN_00367c7c(param_2,uVar2,param_1);
    FUN_003686a8(param_1,9);
    FUN_003729b8(param_1,0x14);
    return;
  }
  return;
}
