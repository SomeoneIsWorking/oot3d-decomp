// OoT3D decomp @ 002c0b68  name=FUN_002c0b68  size=292

float FUN_002c0b68(float param_1,uint *param_2,uint param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar5 = DAT_002c0c94;
  fVar15 = DAT_002c0c90;
  if (param_3 * 2 < 0xff000000) {
    uVar8 = param_3 << 8 | 0x80000000;
    uVar6 = ((param_3 << 1) >> 0x18) - 0x78;
    iVar9 = (int)uVar6 >> 5;
    uVar6 = uVar6 & 0x1f;
    uVar12 = 0x20 - uVar6;
    iVar10 = DAT_002c0c8c + 0x2c0bb0 + iVar9 * 4;
    lVar2 = (ulonglong)uVar8 *
            (ulonglong)
            (*(int *)(DAT_002c0c8c + 0x2c0bb0 + iVar9 * 4) << uVar6 |
            *(uint *)(iVar10 + 4) >> (uVar12 & 0xff));
    uVar7 = (uint)lVar2;
    lVar3 = (ulonglong)uVar8 *
            (ulonglong)(*(uint *)(iVar10 + 4) << uVar6 | *(uint *)(iVar10 + 8) >> (uVar12 & 0xff));
    uVar11 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar6 = (uint)((ulonglong)uVar8 *
                   (ulonglong)
                   (*(uint *)(iVar10 + 8) << uVar6 | *(uint *)(iVar10 + 0xc) >> (uVar12 & 0xff)) >>
                  0x20);
    lVar4 = lVar3 + CONCAT44(uVar7,uVar6);
    uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
    iVar9 = (int)((ulonglong)lVar2 >> 0x20) +
            (uint)(CARRY4(uVar7,uVar11) || CARRY4(uVar7 + uVar11,(uint)CARRY4(uVar6,(uint)lVar3)));
    uVar6 = iVar9 + 0x20U >> 6;
    fVar16 = (float)VectorUnsignedToFloat(uVar8 * 0x2000,(byte)(in_fpscr >> 0x15) & 3);
    bVar13 = (param_3 & 0x80000000) != 0;
    if (bVar13) {
      param_3 = 0x10000000 - uVar6;
    }
    *param_2 = uVar6;
    fVar14 = (float)VectorSignedToFloat(iVar9 * 0x4000000 | (uVar8 >> 0x13) << 0xd,
                                        (byte)(in_fpscr >> 0x15) & 3);
    if (bVar13) {
      *param_2 = param_3;
    }
    fVar17 = (float)VectorUnsignedToFloat((int)lVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar1 = (float)((int)(fVar14 + fVar16 * fVar15 + fVar17 * fVar5) + 0x800U & 0xfffff000);
    fVar15 = fVar1 * DAT_002c0c98 +
             (fVar17 * fVar5 - ((fVar1 - fVar14) - fVar16 * fVar15)) * DAT_002c0c9c +
             fVar1 * DAT_002c0ca0;
    if (bVar13) {
      fVar15 = -fVar15;
    }
    return fVar15;
  }
  *param_2 = 0xffffffff;
  return param_1;
}

