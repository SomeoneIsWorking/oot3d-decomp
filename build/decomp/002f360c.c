// OoT3D decomp @ 002f360c  name=FUN_002f360c  size=112

undefined4 FUN_002f360c(void)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_002f367c;
  if (*(int *)(DAT_002f367c + 4) != 0) {
    iVar2 = FUN_0031b9c0(*(int *)(DAT_002f367c + 4),0);
    if (iVar2 == 0) {
      return 0;
    }
    if (**(int **)(iVar1 + 4) < 0) {
      FUN_0030e3ac(**(int **)(iVar1 + 4),&DAT_002f3680,0,&DAT_002f3680);
      FUN_002fb928(0);
    }
    FUN_0031b99c(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  return 1;
}
