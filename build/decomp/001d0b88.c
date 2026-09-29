// OoT3D decomp @ 001d0b88  name=FUN_001d0b88  size=156

void FUN_001d0b88(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  iVar4 = 0;
  do {
    iVar5 = param_1 + iVar4 * 4;
    piVar2 = *(int **)(iVar5 + 0x22c);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar5 + 0x22c) = 0;
    puVar1 = DAT_001d0c38;
  } while (iVar4 < 0x1e);
  if (*(int *)(param_1 + 0x2a4) != 0) {
    uVar3 = FUN_003685a0();
    piVar2 = (int *)*puVar1;
    (**(code **)(*piVar2 + 0x10))(piVar2,uVar3);
  }
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  if (*(int *)(param_1 + 0x2a8) != 0) {
    uVar3 = FUN_003685a0();
    piVar2 = (int *)*puVar1;
    (**(code **)(*piVar2 + 0x10))(piVar2,uVar3);
  }
  *(undefined4 *)(param_1 + 0x2a8) = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00350be0(param_1 + 0x1a4,param_2);
}
