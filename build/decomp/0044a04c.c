// OoT3D decomp @ 0044a04c  name=FUN_0044a04c  size=180

void FUN_0044a04c(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;

  puVar1 = DAT_0044a100;
  if (*(int *)(DAT_0044a100 + 4) == 0) {
    iVar2 = FUN_0030de88();
    if (iVar2 < 0) {
      FUN_0030e3ac(iVar2,&DAT_0044a104,0,&DAT_0044a104);
      FUN_002fb928(0);
    }
    iVar2 = DAT_0044a10c;
    if (*DAT_0044a108 == 0) {
      uVar3 = FUN_0030de24(DAT_0044a110);
      iVar2 = FUN_0030dde8(DAT_0044a108,DAT_0044a110,uVar3,0);
      if (iVar2 < 0) {
        FUN_0030e3ac(iVar2,&DAT_0044a104,0,&DAT_0044a104);
        FUN_002fb928(0);
      }
    }
    if (-1 < iVar2) {
      *puVar1 = 1;
    }
  }
  *(int *)(puVar1 + 4) = *(int *)(puVar1 + 4) + 1;
  return;
}
