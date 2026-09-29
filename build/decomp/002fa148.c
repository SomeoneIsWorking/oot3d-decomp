// OoT3D decomp @ 002fa148  name=FUN_002fa148  size=76

void FUN_002fa148(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;

  iVar1 = DAT_002fa194;
  if (param_1 == 0) {
    iVar3 = FUN_002e1ef0();
    if (iVar3 == 0) {
      return;
    }
    FUN_002ce818();
    uVar2 = 1;
  }
  else {
    if (*(char *)(DAT_002fa194 + 5) == '\0') {
      return;
    }
    FUN_002ea6f8();
    uVar2 = 0;
  }
  *(undefined1 *)(iVar1 + 5) = uVar2;
  return;
}
