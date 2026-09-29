// OoT3D decomp @ 003f87fc  name=FUN_003f87fc  size=502

void FUN_003f87fc(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_74 [16];

  if ((*(ushort *)(*(int *)(param_2 + 0xa54) + 0x194) & 0x100) != 0) {
    return;
  }
  FUN_003534b8(auStack_74,200,200,200,0xb4,200,200,200);
  bVar1 = *(byte *)(param_2 + 0x3270);
  if (bVar1 < *(byte *)(param_2 + 0x3271)) {
    if ((*(uint *)(param_2 + 0xf8) & 0xf) != 0) goto LAB_003f8890;
    cVar2 = '\x02';
  }
  else {
    if ((bVar1 == *(byte *)(param_2 + 0x3271)) || ((*(uint *)(param_2 + 0xf8) & 0xf) != 0))
    goto LAB_003f8890;
    cVar2 = -2;
  }
  *(byte *)(param_2 + 0x3270) = bVar1 + cVar2;
LAB_003f8890:
  fVar4 = DAT_003f8c10;
  if (*(char *)(param_2 + 0x3270) == '\0') {
    FUN_00371eac(*(undefined4 *)(param_1 + 0x16c0),0);
    return;
  }
  iVar3 = FUN_003695f8();
  if (iVar3 == 0) {
    cVar2 = *(char *)(param_1 + 0x1a4);
    if (cVar2 == '\0') {
      fVar7 = *(float *)(param_2 + 0x1c4) - *(float *)(param_2 + 0x1b8);
      fVar5 = *(float *)(param_2 + 0x1c8) - *(float *)(param_2 + 0x1bc);
      fVar6 = *(float *)(param_2 + 0x1cc) - *(float *)(param_2 + 0x1c0);
      fVar8 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
      *(float *)(param_1 + 0x1c0) = *(float *)(param_2 + 0x1b8) + (fVar7 / fVar8) * fVar4;
      *(float *)(param_1 + 0x1c4) = *(float *)(param_2 + 0x1bc) + (fVar5 / fVar8) * fVar4;
      *(float *)(param_1 + 0x1c8) = *(float *)(param_2 + 0x1c0) + (fVar6 / fVar8) * fVar4;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if (cVar2 == '\x01') {
      fVar8 = *(float *)(param_2 + 0x1c4) - *(float *)(param_2 + 0x1b8);
      fVar4 = *(float *)(param_2 + 0x1c8) - *(float *)(param_2 + 0x1bc);
      fVar5 = *(float *)(param_2 + 0x1cc) - *(float *)(param_2 + 0x1c0);
      fVar6 = SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0(fVar4 / fVar6,fVar5 / fVar6,fVar6,fVar8 / fVar6);
    }
    if (cVar2 == '\x02') {
      *(undefined1 *)(param_1 + 0x1a4) = 0;
    }
  }
  return;
}
