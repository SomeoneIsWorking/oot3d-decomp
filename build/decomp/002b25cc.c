// OoT3D decomp @ 002b25cc  name=FUN_002b25cc  size=456

void FUN_002b25cc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;

  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_002b2798,DAT_002b2794,DAT_002b2794,param_2,param_1,4);
  FUN_00330370(param_1);
  FUN_003210a4(param_1,param_2);
  uVar3 = DAT_002b279c;
  iVar4 = param_1 + 0x1a4;
  iVar2 = FUN_003736fc(DAT_002b27a0,DAT_002b279c,iVar4);
  if ((((iVar2 != 0) || (iVar2 = FUN_003736fc(DAT_002b27a4,uVar3,iVar4), iVar2 != 0)) ||
      (iVar2 = FUN_003736fc(DAT_002b27a8,uVar3,iVar4), iVar2 != 0)) ||
     ((iVar2 = FUN_003736fc(DAT_002b27ac,uVar3,iVar4), iVar2 != 0 ||
      (iVar2 = FUN_003736fc(DAT_002b27b0,uVar3,iVar4), iVar2 != 0)))) {
    FUN_0037547c(DAT_002b27bc,param_1 + 0x28,4,DAT_002b27b8,DAT_002b27b8,DAT_002b27b4);
  }
  iVar2 = FUN_003736fc(DAT_002b27c0,uVar3,iVar4);
  if (iVar2 != 0) {
    FUN_0037547c(DAT_002b27c4,param_1 + 0x28,4,DAT_002b27b8,DAT_002b27b8,DAT_002b27b4);
  }
  iVar2 = FUN_003736fc(DAT_002b27c8,uVar3,iVar4);
  if (iVar2 != 0) {
    FUN_0037547c(DAT_002b27cc,param_1 + 0x28,4,DAT_002b27b8,DAT_002b27b8,DAT_002b27b4);
    FUN_003674e4(1);
  }
  if (iVar1 != 0) {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,0xb);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_002b27d4,DAT_002b27d0,uVar3,DAT_002b27d0,param_1 + 0x1a4,0xc,0);
    *(undefined4 *)(param_1 + 3000) = 0x38;
  }
  return;
}
