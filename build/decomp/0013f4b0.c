// OoT3D decomp @ 0013f4b0  name=FUN_0013f4b0  size=196

void FUN_0013f4b0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = FUN_003731e0(param_1 + 0x1e0,*(undefined2 *)(param_1 + 0xbe));
  uVar1 = DAT_0013f688;
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x6c) = DAT_0013f68c;
    uVar2 = DAT_0013f690;
    *(undefined2 *)(param_1 + 0xc14) = 0;
    iVar3 = FUN_0036f18c(param_1,uVar2);
    if (iVar3 == 0) {
      FUN_0035ad18(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    iVar3 = FUN_00369608(param_2,param_1);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    FUN_0035a368(param_1,param_2);
  }
  if ((*(uint *)(DAT_0013f6b0 + param_2) & 0x5f) == 0) {
    FUN_00375bcc(param_1,uVar1);
    return;
  }
  return;
}
