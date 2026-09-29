// OoT3D decomp @ 00386110  name=FUN_00386110  size=56

void FUN_00386110(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  int unaff_r5;
  int *piVar4;
  int unaff_r6;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr4;
  undefined4 in_cr6;
  float unaff_s16;
  float in_stack_0000007c;

  coprocessor_movefromRt(10,5,0,in_cr4,in_cr0);
  coprocessor_function(0,0xf,0,in_cr0,in_cr1,in_cr6);
  FUN_00375c08(in_stack_0000007c - unaff_s16,unaff_r4 + 0x1b8,param_2,2);
  iVar1 = 0;
  if (*(int *)(DAT_00385dc0 + unaff_r6 * 0x80000) != 0) {
    iVar1 = unaff_r6 * 0x80000 + 0x3a5c;
  }
  if (((*DAT_00385dc4 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_00385dc4), iVar2 != 0)) {
    FUN_0036788c(DAT_00385dc8);
  }
  piVar4 = *(int **)(DAT_00385dc8 + 0x17c);
  uVar3 = ObjectBankArchive_00358ef8(iVar1 + 0x10,*(undefined1 *)(DAT_00385dd4 + 1));
  uVar3 = (**(code **)(*piVar4 + 8))(piVar4,uVar3,0);
  *(undefined4 *)(unaff_r5 + 0x178) = uVar3;
  FUN_00372d4c(unaff_r4 + 0xbc,DAT_00385ddc);
  return;
}
