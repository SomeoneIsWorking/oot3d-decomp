// OoT3D decomp @ 00344410  name=FUN_00344410  size=384

void FUN_00344410(undefined2 *param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  iVar3 = DAT_00344590;
  puVar5 = (undefined2 *)(DAT_00344590 + 0x1c);
  bVar1 = *(byte *)(DAT_00344590 + 0x2c);
  *(uint *)(param_1 + 0x10) = (uint)bVar1;
  if (bVar1 != 0) {
    puVar6 = (undefined2 *)(iVar3 + 0x1a);
    puVar7 = param_1 + -1;
    if ((bVar1 & 1) != 0) {
      *param_1 = *puVar5;
      puVar6 = puVar5;
      puVar7 = param_1;
    }
    for (iVar8 = *(int *)(param_1 + 0x10) >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar7[1] = puVar6[1];
      puVar6 = puVar6 + 2;
      puVar7 = puVar7 + 2;
      *puVar7 = *puVar6;
    }
  }
  iVar8 = DAT_00344598;
  fVar11 = DAT_00344594;
  fVar10 = (float)VectorUnsignedToFloat((uint)*(ushort *)(iVar3 + 0xc),(byte)(in_fpscr >> 0x15) & 3)
  ;
  lVar2 = (longlong)(int)(fVar10 * DAT_00344594) * (longlong)DAT_00344598 +
          ((ulonglong)(uint)(int)(fVar10 * DAT_00344594) << 0x20);
  param_1[0x12] = (short)(int)(lVar2 >> 0x25) - (short)(lVar2 >> 0x3f);
  fVar10 = (float)VectorUnsignedToFloat((uint)*(ushort *)(iVar3 + 0xc),(byte)(in_fpscr >> 0x15) & 3)
  ;
  uVar9 = (uint)(fVar10 * fVar11);
  lVar2 = (longlong)(int)uVar9 * (longlong)iVar8 + ((ulonglong)uVar9 << 0x20);
  param_1[0x13] = (short)uVar9 + ((short)(int)(lVar2 >> 0x25) - (short)(lVar2 >> 0x3f)) * -0x3c;
  iVar8 = DAT_0034459c;
  param_1[0x14] = *(undefined2 *)(iVar3 + 0xe8);
  param_1[0x17] = (short)*(undefined4 *)(iVar3 + 0xed4);
  param_1[0x18] = *(undefined2 *)(iVar8 + 0x96);
  param_1[0x19] = (short)*(undefined4 *)(iVar3 + 0xed0);
  param_1[0x15] = *(undefined2 *)(iVar8 + 0x96);
  uVar9 = *(uint *)(iVar3 + 0xed8);
  if (*(int *)(iVar3 + 4) == 0) {
    uVar9 = uVar9 >> 0x18;
  }
  uVar9 = uVar9 & 0x7f;
  if ((param_2 == 1 || param_2 == 2) || param_2 == 5) {
    fVar11 = (float)VectorSignedToFloat(uVar9 * uVar9,(byte)(in_fpscr >> 0x15) & 3);
    uVar9 = (uint)(DAT_003445a4 + fVar11 * DAT_003445a0);
  }
  param_1[0x16] = (short)uVar9;
  *(int *)(param_1 + 0x1a) = (int)*(short *)(iVar8 + 100);
  *(int *)(param_1 + 0x1c) = (int)*(short *)(iVar8 + 0x60);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(iVar3 + 0xedc);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar3 + 0xee0);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(iVar3 + 0xee8);
  cVar4 = *(char *)(iVar3 + 0xe);
  if (cVar4 != '\0') {
    cVar4 = '\x01';
  }
  *(char *)(param_1 + 100) = cVar4;
  FUN_00343280(param_1 + 0x24,0x80);
  return;
}

