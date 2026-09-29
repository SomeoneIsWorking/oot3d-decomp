// OoT3D decomp @ 003da4f4  name=FUN_003da4f4  size=220

void FUN_003da4f4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = *(int *)(DAT_003da5d0 + param_2);
  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_003da5d4;
  FUN_00373500(*(undefined4 *)(iVar2 + 0x28),DAT_003da5d4,*(undefined4 *)(param_1 + 0x8c0),
               param_1 + 0x28);
  FUN_00373500(*(undefined4 *)(iVar2 + 0x30),uVar1,*(undefined4 *)(param_1 + 0x8c0),param_1 + 0x30);
  FUN_00373500(DAT_003da5dc,uVar1,DAT_003da5d8,param_1 + 0x8c0);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),3,
               (int)(short)(int)*(float *)(param_1 + 0x8c4),0);
  FUN_00373500(DAT_003da5e4,uVar1,DAT_003da5e0,param_1 + 0x8c4);
  FUN_0036fc20(DAT_003da5ec,DAT_003da5e8,param_1 + 0x8c8);
  if (*(int *)(param_1 + 0x98) < DAT_003da5f0) {
    *(undefined4 *)(param_1 + 0x8a8) = DAT_003da5f4;
  }
  return;
}
