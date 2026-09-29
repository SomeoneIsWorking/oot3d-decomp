// OoT3D decomp @ 00287ab8  name=FUN_00287ab8  size=256

void FUN_00287ab8(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;

  uVar1 = DAT_00287bbc;
  iVar4 = DAT_00287bb8;
  if (((*(uint *)(DAT_00287bb8 + 0x28) & 1) == 0) &&
     (iVar3 = FUN_003679b4(DAT_00287bb8 + 0x28), puVar2 = DAT_00287bc0, iVar3 != 0)) {
    *DAT_00287bc0 = uVar1;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  if (((*(uint *)(iVar4 + 0x24) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_00287bc4), puVar2 = DAT_00287bcc, iVar4 != 0)) {
    *DAT_00287bcc = DAT_00287bc8;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  if (param_2 == 6) {
    FUN_003735ac(param_4 + 0x3c,param_3,DAT_00287bc0);
    FUN_003735ac(&local_28,param_3,DAT_00287bcc);
    *(undefined4 *)(param_4 + 0x12c8) = local_28;
    *(undefined4 *)(param_4 + 0x12cc) = uStack_24;
    *(undefined4 *)(param_4 + 0x12d0) = uStack_20;
  }
  FUN_00357750(param_2,param_4 + 0xeec,param_3);
  return;
}
