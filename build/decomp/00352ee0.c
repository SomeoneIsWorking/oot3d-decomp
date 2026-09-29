// OoT3D decomp @ 00352ee0  name=FUN_00352ee0  size=296

int FUN_00352ee0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;

  *(undefined1 *)(param_1 + 0x19a) = 1;
  iVar4 = 0;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_00353008 + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  if (((*DAT_0035300c & 1) == 0) && (iVar2 = FUN_003679b4(DAT_0035300c), iVar2 != 0)) {
    FUN_0036788c(DAT_00353010);
  }
  piVar1 = DAT_0035301c;
  piVar5 = *(int **)(DAT_00353010 + 0x17c);
  iVar2 = 0;
  piVar5[2] = *(int *)(param_1 + 0x178);
  if (0 < param_3) {
    do {
      if (*(int *)(param_5 + iVar2 * 4) == -1) {
        *(undefined4 *)(param_4 + iVar2 * 4) = 0;
      }
      else {
        uVar3 = ObjectBankArchive_00358ef8(param_2 + 0x10);
        uVar3 = (**(code **)(*piVar5 + 8))(piVar5,uVar3,1);
        *(undefined4 *)(param_4 + iVar2 * 4) = uVar3;
        iVar4 = iVar4 + 1;
        *piVar1 = *piVar1 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  piVar5[2] = 0;
  if (0 < iVar4) {
    piVar1[1] = piVar1[1] + 1;
  }
  return param_2 + 0x10;
}
