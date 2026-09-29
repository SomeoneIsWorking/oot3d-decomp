// OoT3D decomp @ 00424bfc  name=FUN_00424bfc  size=172

void FUN_00424bfc(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;

  iVar1 = DAT_00424ca8;
  if ((*(int *)(DAT_00424ca8 + 0x18) != 0) &&
     ((**(code **)(**(int **)(DAT_00424ca8 + 4) + 0xc))(), *(int *)(iVar1 + 0x1c) == 0)) {
    if (*(short *)(DAT_00424cac + 0xe8) != 0) {
      FUN_002f78a0(*(undefined4 *)(iVar1 + 8));
    }
    iVar3 = *(int *)(iVar1 + 0x3c);
    if (iVar3 == 0) {
      FUN_002f780c(*(undefined4 *)(iVar1 + 0x10));
    }
    else if (0 < iVar3) {
      *(int *)(iVar1 + 0x3c) = iVar3 + -1;
    }
    puVar2 = DAT_00424cb0;
    (**(code **)(*(int *)*DAT_00424cb0 + 0xc))();
    (**(code **)(*(int *)puVar2[1] + 0xc))();
    if (*(int *)(iVar1 + 0x54) != 0) {
      FUN_002f780c();
    }
    FUN_002fb934(*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}
