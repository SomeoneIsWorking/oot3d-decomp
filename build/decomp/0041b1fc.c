// OoT3D decomp @ 0041b1fc  name=FUN_0041b1fc  size=132

void FUN_0041b1fc(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;

  if (*DAT_0041b274 != 0) {
    return;
  }
  iVar1 = FUN_0030de88();
  if (iVar1 != DAT_0041b278 && iVar1 < 0) {
    FUN_003351b4();
  }
  piVar3 = DAT_0041b274;
  uVar2 = FUN_0030de24(DAT_0041b27c);
  iVar1 = FUN_0030dde8(piVar3,DAT_0041b27c,uVar2,0);
  if (iVar1 < 0) {
    FUN_003351b4();
  }
  FUN_00422a3c(*(undefined4 *)(DAT_0041b280 + 4));
  piVar3 = (int *)(DAT_0041b280 + 8);
  *piVar3 = DAT_0041b280;
  *DAT_00422cdc = piVar3;
  return;
}
