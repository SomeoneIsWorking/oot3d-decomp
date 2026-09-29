// OoT3D decomp @ 0031d3c0  name=FUN_0031d3c0  size=332

void FUN_0031d3c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  uVar4 = DAT_0031d50c;
  if (((*(char *)(param_1 + 0xe74) != '\0') ||
      (((((iVar1 = FUN_003736fc(DAT_0031d510,DAT_0031d50c,param_1 + 0x1c4), iVar1 == 0 ||
          (*(char *)(param_1 + 0x1b0) != '\0')) &&
         ((iVar1 = FUN_003736fc(DAT_0031d514,uVar4,param_1 + 0x1c4), iVar1 == 0 ||
          (*(char *)(param_1 + 0x1b0) != '\0')))) &&
        ((iVar1 = FUN_003736fc(DAT_0031d518,uVar4,param_1 + 0x1c4), iVar1 == 0 ||
         (*(char *)(param_1 + 0x1b0) != '\x01')))) &&
       ((iVar1 = FUN_003736fc(DAT_0031d51c,uVar4,param_1 + 0x1c4), iVar1 == 0 ||
        (*(char *)(param_1 + 0x1b0) != '\x01')))))) ||
     (uVar2 = DAT_0031d528, uVar3 = DAT_0031d524, uVar4 = DAT_0031d520,
     (*(uint *)(param_1 + 0xe54) & 0x1000) != 0)) {
    uVar3 = DAT_0031d524;
    uVar4 = DAT_0031d520;
    if (*(char *)(param_1 + 0xe74) != '\x03') {
      return;
    }
    if (*(int *)(param_1 + 0xe78) <= DAT_0031d52c) {
      return;
    }
    if ((*(uint *)(param_1 + 0xe54) & 0x800) != 0) {
      return;
    }
    *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x800;
    uVar2 = DAT_0031d530;
  }
  FUN_0037547c(uVar2,param_1 + 0x28,4,uVar3,uVar3,uVar4);
  return;
}
