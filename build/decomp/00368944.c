// OoT3D decomp @ 00368944  name=FUN_00368944  size=216

void FUN_00368944(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;

  if (*(byte *)(param_1 + 0x198) != param_3) {
    if (*(int **)(param_1 + 0x194) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x194) + 4))();
    }
    iVar1 = 0;
    if (*(int *)(DAT_00368a1c + param_2) != 0) {
      iVar1 = param_2 + 0x3a5c;
    }
    if (((*DAT_00368a20 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_00368a20), iVar2 != 0)) {
      FUN_0036788c(DAT_00368a24);
    }
    piVar4 = *(int **)(DAT_00368a24 + 0x17c);
    piVar4[2] = *(int *)(param_1 + 0x178);
    uVar3 = ObjectBankArchive_00358ef8(iVar1 + 0x10,*(undefined1 *)(DAT_00368a30 + param_3));
    uVar3 = (**(code **)(*piVar4 + 8))(piVar4,uVar3,0);
    *(undefined4 *)(param_1 + 0x194) = uVar3;
    piVar4[2] = 0;
    *(char *)(param_1 + 0x198) = (char)param_3;
  }
  return;
}
