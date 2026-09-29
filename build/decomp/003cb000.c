// OoT3D decomp @ 003cb000  name=FUN_003cb000  size=232

void FUN_003cb000(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;

  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
  if ((DAT_003cb0e8 < *(int *)(param_1 + 0x98)) && ((*(ushort *)(param_1 + 0x135c) & 0x80) == 0)) {
    FUN_00374428(param_1);
  }
  FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x1360),2,0x80,0x40);
  fVar2 = DAT_003cb0f4;
  iVar1 = DAT_003cb0ec;
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  if ((int)*(float *)(param_1 + 0x6c) < iVar1) {
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) + DAT_003cb0f0;
  }
  fVar3 = *(float *)(param_1 + 100);
  if (*(float *)(param_1 + 0x2c) <= *(float *)(param_1 + 0x1358) + fVar2) {
    if (DAT_003cb100 <= (int)fVar3) goto LAB_003cb0d8;
    fVar3 = fVar3 + DAT_003cb104;
  }
  else {
    if (fVar3 <= DAT_003cb0f8) goto LAB_003cb0d8;
    fVar3 = fVar3 - DAT_003cb0fc;
  }
  *(float *)(param_1 + 100) = fVar3;
LAB_003cb0d8:
  *(ushort *)(param_1 + 0x135c) = *(ushort *)(param_1 + 0x135c) | 8;
  return;
}
