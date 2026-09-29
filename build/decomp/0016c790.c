// OoT3D decomp @ 0016c790  name=FUN_0016c790  size=200

void FUN_0016c790(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  iVar1 = DAT_0016c858;
  if (*(int *)(param_1 + 0xc60) != 0) {
    *(undefined2 *)(*(int *)(param_1 + 0xc60) + 0x118) = 0xf;
  }
  iVar3 = 0;
  do {
    iVar4 = *(int *)(iVar1 + iVar3 * 4 + 4);
    if (iVar4 == 0) {
      return;
    }
    if (*(char *)(iVar4 + 0xc38) != '\x01') {
      return;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  iVar3 = 0;
  do {
    iVar4 = *(int *)(iVar1 + iVar3 * 4 + 4);
    if (iVar4 == 0) {
      return;
    }
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar4 + 0xc38) = 0;
  } while (iVar3 < 5);
  *(undefined2 *)(DAT_0016c85c + param_2) = 4;
  FUN_00375bcc(param_1,DAT_0016c860);
  uVar2 = DAT_0016c86c;
  if (*(int *)(param_1 + 0xc44) == 0) {
    *(undefined4 *)(param_1 + 0xc04) = DAT_0016c864;
    return;
  }
  *(undefined4 *)(param_1 + 0xc04) = DAT_0016c868;
  FUN_003724dc(DAT_0016c870,uVar2,param_1,param_2);
  return;
}
