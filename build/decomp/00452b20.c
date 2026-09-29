// OoT3D decomp @ 00452b20  name=FUN_00452b20  size=944

void FUN_00452b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  bool bVar14;
  uint in_fpscr;
  undefined4 extraout_s0;
  float fVar15;
  undefined4 extraout_s1;
  undefined4 extraout_s2;
  undefined4 extraout_s3;
  undefined4 extraout_s4;
  undefined4 extraout_s5;
  undefined4 extraout_s6;
  undefined4 extraout_s7;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  short *local_70;
  float local_6c;
  uint local_68;
  int local_64;
  undefined1 auStack_60 [48];
  int *local_30;

  bVar14 = *(char *)(param_9 + 0x14) != '\0';
  iVar5 = 0;
  if (bVar14) {
    iVar5 = *(int *)(param_9 + 0xc);
  }
  if (bVar14 && iVar5 != 0) {
    local_30 = *(int **)(*(int *)(*(int *)(param_9 + 4) + 4) + 0xc);
    if (((*DAT_00452ed0 & 1) == 0) &&
       (iVar5 = FUN_003679b4(DAT_00452ed0), puVar3 = DAT_00452edc, uVar2 = DAT_00452ed8,
       uVar8 = DAT_00452ed4, param_1 = extraout_s0, param_2 = extraout_s1, param_3 = extraout_s2,
       param_4 = extraout_s3, param_5 = extraout_s4, param_6 = extraout_s5, param_7 = extraout_s6,
       param_8 = extraout_s7, iVar5 != 0)) {
      *DAT_00452edc = DAT_00452ed4;
      puVar3[1] = uVar2;
      puVar3[2] = uVar2;
      puVar3[3] = uVar2;
      puVar3[4] = uVar2;
      puVar3[5] = uVar8;
      puVar3[6] = uVar2;
      puVar3[7] = uVar2;
      puVar3[8] = uVar2;
      puVar3[9] = uVar2;
      puVar3[10] = uVar8;
      puVar3[0xb] = uVar2;
      param_1 = uVar2;
      param_2 = uVar2;
      param_3 = uVar2;
      param_4 = uVar2;
      param_5 = uVar2;
      param_6 = uVar8;
      param_7 = uVar2;
      param_8 = uVar2;
    }
    FUN_00372224(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,auStack_60,
                 DAT_00452edc);
    fVar4 = DAT_00452ee0;
    iVar11 = 0;
    iVar5 = 0;
    iVar12 = 0;
    local_64 = 0;
    if (0 < *(int *)(*local_30 + 8)) {
      do {
        piVar9 = (int *)(local_30[4] + iVar12 * 0xc);
        bVar1 = *(byte *)(*piVar9 + 2);
        uVar6 = (uint)bVar1;
        piVar9 = (int *)(*(int *)(piVar9[2] + 0xc) + (short)(ushort)bVar1 * 0x1cc);
        *(int *)(param_9 + 0x60) = *(int *)(param_9 + 0x5c) + iVar12 * 0x18;
        local_68 = uVar6;
        if (*(char *)(*(int *)(*(int *)(param_9 + 0xc) + 4) + uVar6 * 0x124) != '\0') {
          local_88 = (float)VectorUnsignedToFloat
                                      ((uint)*(byte *)(*piVar9 + 0xa8),(byte)(in_fpscr >> 0x15) & 3)
          ;
          local_88 = local_88 * fVar4;
          local_84 = (float)VectorUnsignedToFloat
                                      ((uint)*(byte *)(*piVar9 + 0xa9),(byte)(in_fpscr >> 0x15) & 3)
          ;
          local_84 = local_84 * fVar4;
          local_80 = (float)VectorUnsignedToFloat
                                      ((uint)*(byte *)(*piVar9 + 0xaa),(byte)(in_fpscr >> 0x15) & 3)
          ;
          local_80 = local_80 * fVar4;
          local_7c = (float)VectorUnsignedToFloat
                                      ((uint)*(byte *)(*piVar9 + 0xab),(byte)(in_fpscr >> 0x15) & 3)
          ;
          local_7c = local_7c * fVar4;
          local_78 = (float)VectorUnsignedToFloat
                                      ((uint)*(byte *)(*piVar9 + 0xa4),(byte)(in_fpscr >> 0x15) & 3)
          ;
          local_78 = local_78 * fVar4;
          local_74 = (float)VectorUnsignedToFloat
                                      ((uint)*(byte *)(*piVar9 + 0xa5),(byte)(in_fpscr >> 0x15) & 3)
          ;
          local_74 = local_74 * fVar4;
          fVar15 = (float)VectorUnsignedToFloat
                                    ((uint)*(byte *)(*piVar9 + 0xa6),(byte)(in_fpscr >> 0x15) & 3);
          local_70 = (short *)(fVar15 * fVar4);
          local_6c = (float)VectorUnsignedToFloat
                                      ((uint)*(byte *)(*piVar9 + 0xa7),(byte)(in_fpscr >> 0x15) & 3)
          ;
          local_6c = local_6c * fVar4;
          FUN_00333abc(*(undefined4 *)(param_9 + 0xc),uVar6,&local_88);
          FUN_00467068(param_9 + 0x60,&local_88,
                       *(undefined4 *)(*(int *)(param_9 + 0x78) + local_64 * 4));
        }
        iVar10 = 0;
        local_64 = local_64 + 1;
        if (0 < *(int *)(*piVar9 + 8)) {
          do {
            iVar7 = *(int *)(*(int *)(param_9 + 0xc) + 4) + uVar6 * 0x124;
            if ((*(char *)(iVar7 + iVar10 + 1) != '\0') ||
               (bVar14 = false, *(char *)(iVar7 + iVar10 + 4) != '\0')) {
              bVar14 = true;
            }
            if (bVar14) {
              FUN_0046ba4c(&local_6c,*(int *)(param_9 + 0xc),local_68,iVar10);
              FUN_003143a8(&local_6c,auStack_60);
              FUN_002dd4c0(param_9 + 0x60,iVar10,auStack_60,
                           *(undefined4 *)(*(int *)(param_9 + 0x80) + iVar11 * 4));
            }
            if (iVar10 < *(int *)(*piVar9 + 8)) {
              psVar13 = (short *)(*piVar9 + iVar10 * 0x18 + 0x10);
            }
            else {
              psVar13 = (short *)0x0;
            }
            if (*(char *)(*(int *)(*(int *)(param_9 + 0xc) + 4) + uVar6 * 0x124 + iVar10 + 7) !=
                '\0') {
              FUN_0046b974(&local_70,*(int *)(param_9 + 0xc),local_68,iVar10);
              uVar8 = FUN_0046b9a0(*(undefined4 *)(param_9 + 0xc),local_68,
                                   *(undefined4 *)((int)local_6c + *local_70 * 4));
              FUN_00466f28(param_9 + 0x60,uVar8,
                           *(undefined4 *)(*(int *)(param_9 + 0x88) + iVar5 * 4));
            }
            if (((iVar10 != 0) || (*(char *)(*(int *)(param_9 + 0x10) + 0x1b5) == '\0')) &&
               (-1 < *psVar13)) {
              iVar5 = iVar5 + 1;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(*piVar9 + 8));
        }
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + 1;
      } while (iVar12 < *(int *)(*local_30 + 8));
    }
  }
  return;
}
