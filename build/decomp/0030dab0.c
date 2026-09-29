// OoT3D decomp @ 0030dab0  name=FUN_0030dab0  size=136

int FUN_0030dab0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;

  iVar1 = DAT_0030db38;
  if (*(int *)(DAT_0030db38 + 0x28) == 0) {
    *(undefined4 *)(DAT_0030db38 + 0x28) = *(undefined4 *)(DAT_0030db38 + 0x24);
  }
  iVar3 = DAT_0030db40;
  if (*DAT_0030db3c == 0) {
    puVar4 = *(undefined **)(iVar1 + 0x28);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = &DAT_0030db44;
    }
    uVar2 = FUN_0030de24(puVar4);
    iVar3 = FUN_0030dde8(DAT_0030db3c,puVar4,uVar2,0);
  }
  if (iVar3 < 0) {
    FUN_0030e3ac(iVar3,&DAT_0030db48,0,&DAT_0030db48);
    FUN_002fb928(0);
  }
  return iVar3;
}
