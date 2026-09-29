// OoT3D decomp @ 003ff718  name=FUN_003ff718  size=60

void FUN_003ff718(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_003ff754;
  iVar2 = *param_1;
  if (iVar2 != 0) {
    param_2 = *(int *)(iVar2 + 0x9c);
  }
  if (iVar2 == 0) {
    param_2 = -1;
  }
  if (param_2 == *(int *)(DAT_003ff754 + 0x18)) {
    if (iVar2 != 0) {
      FUN_003102dc(iVar2,0);
    }
    *(undefined1 *)(iVar1 + 4) = 1;
  }
  return;
}
