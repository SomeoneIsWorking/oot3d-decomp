// OoT3D decomp @ 00145b60  name=FUN_00145b60  size=148

void FUN_00145b60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;

  iVar4 = FUN_00369a48();
  uVar3 = DAT_00145bfc;
  uVar2 = DAT_00145bf8;
  iVar1 = DAT_00145bf4;
  if (iVar4 != 0) {
    if (*(int *)(DAT_00145bf4 + 4) == 0) {
      *(undefined4 *)(param_1 + 0xbac) = DAT_00145c00;
      *(undefined4 *)(param_1 + 0xbb0) = uVar3;
      *(ushort *)(iVar1 + 0xef8) = *(ushort *)(iVar1 + 0xef8) | 0x400;
    }
    else {
      *(undefined4 *)(param_1 + 0xbb0) = DAT_00145bfc;
      *(undefined4 *)(param_1 + 0xbac) = uVar2;
      *(ushort *)(iVar1 + 0xeee) = *(ushort *)(iVar1 + 0xeee) | 8;
    }
  }
  if (DAT_00145c04 < (int)*(float *)(param_1 + 0xcc)) {
    *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xcc) - DAT_00145c08;
  }
  *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 4;
  return;
}
