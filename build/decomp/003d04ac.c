// OoT3D decomp @ 003d04ac  name=FUN_003d04ac  size=140

void FUN_003d04ac(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 6) && (iVar2 = FUN_00346964(param_2), iVar1 = DAT_003d0538, iVar2 != 0)) {
    if (*(int *)(param_1 + 0xe98) == 0x3e) {
      *(ushort *)(DAT_003d0540 + 0x42) = *(ushort *)(DAT_003d0540 + 0x42) | 2;
      *(undefined2 *)(iVar1 + 0x154e) = 0;
      *(undefined1 *)(iVar1 + 0x15aa) = 0;
    }
    else if (*(int *)(param_1 + 0xe98) == 0x4d) {
      FUN_00376a60(5);
      *(undefined2 *)(iVar1 + 0x154e) = 0;
      *(undefined1 *)(iVar1 + 0x15aa) = 0;
    }
    *(undefined4 *)(param_1 + 0xd88) = DAT_003d053c;
  }
  return;
}
