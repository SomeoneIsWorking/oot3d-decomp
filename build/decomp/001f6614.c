// OoT3D decomp @ 001f6614  name=FUN_001f6614  size=716

void FUN_001f6614(int param_1,int param_2)

{
  undefined1 uVar1;
  float fVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_34;
  undefined4 uStack_30;
  int local_2c;
  float local_28;
  
  fVar2 = DAT_001f6914;
  if (*(short *)(param_1 + 0x1a4) != 0) {
    if (*(int *)(param_1 + 0x1ac) != 0) {
      local_34 = 0;
      uStack_30 = 0;
      local_2c = 0;
      local_28 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1a4),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_28 = local_28 * DAT_001f6914;
      uVar4 = FUN_003687a8(*(undefined4 *)(param_1 + 0x1ac));
      FUN_003589cc(uVar4,4);
      FUN_00358964(uVar4,4,&local_34);
      uVar4 = DAT_001f6918;
      if (*(char *)(param_1 + 0x1a6) == '\0') {
        fVar10 = (float)FUN_003727f0(DAT_001f6918);
        fVar11 = (float)FUN_00372674(uVar4);
        fVar12 = *(float *)(param_1 + 0x148);
        *(float *)(param_1 + 0x148) = fVar12 * fVar11 - *(float *)(param_1 + 0x150) * fVar10;
        *(float *)(param_1 + 0x150) = fVar12 * fVar10 + *(float *)(param_1 + 0x150) * fVar11;
        fVar12 = *(float *)(param_1 + 0x158);
        *(float *)(param_1 + 0x158) = fVar12 * fVar11 - *(float *)(param_1 + 0x160) * fVar10;
        *(float *)(param_1 + 0x160) = fVar12 * fVar10 + *(float *)(param_1 + 0x160) * fVar11;
        fVar12 = *(float *)(param_1 + 0x168);
        *(float *)(param_1 + 0x168) = fVar12 * fVar11 - *(float *)(param_1 + 0x170) * fVar10;
        *(float *)(param_1 + 0x170) = fVar12 * fVar10 + *(float *)(param_1 + 0x170) * fVar11;
      }
      FUN_003721e0(*(undefined4 *)(param_1 + 0x1ac),param_1 + 0x148);
      *(undefined1 *)(*(int *)(param_1 + 0x1ac) + 0xac) = 1;
      FUN_00372170(*(undefined4 *)(param_1 + 0x1ac),1);
    }
    piVar3 = DAT_001f6920;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1a4),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if (*(short *)(param_2 + 0x104) == 1) {
      fVar12 = ABS(*(float *)(param_1 + 0x9c));
      fVar11 = *(float *)(param_1 + 0x98);
      bVar9 = SBORROW4((int)fVar11,(int)DAT_001f691c);
      iVar5 = (int)fVar11 - (int)DAT_001f691c;
      bVar8 = fVar11 == DAT_001f691c;
      if ((int)fVar11 <= (int)DAT_001f691c) {
        fVar7 = (float)((int)DAT_001f691c + 0x350000);
        bVar9 = SBORROW4((int)fVar12,(int)fVar7);
        iVar5 = (int)fVar12 - (int)fVar7;
        bVar8 = fVar12 == fVar7;
      }
      if (bVar8 || iVar5 < 0 != bVar9) {
        iVar5 = *(int *)(param_2 + 0xf8);
        if (iVar5 != *DAT_001f6920) {
          DAT_001f6920[1] = DAT_001f6924;
          *piVar3 = iVar5;
        }
        if (fVar11 < (float)piVar3[1]) {
          piVar3[1] = (int)fVar11;
          local_2c = param_2 + 0x4c30;
          iVar5 = 0;
          local_28 = (float)(param_2 + 0x500c);
          do {
            puVar6 = (undefined1 *)(&local_2c)[iVar5];
            uVar1 = *puVar6;
            bVar8 = puVar6[6] == '\0';
            if (!bVar8) {
              puVar6 = puVar6 + 8;
              bVar8 = puVar6 == (undefined1 *)0x0;
            }
            if (!bVar8) {
              puVar6 = *(undefined1 **)(puVar6 + 4);
              bVar8 = puVar6 == (undefined1 *)0x0;
            }
            if (bVar8) goto switchD_001f67fc_caseD_2;
            switch(uVar1) {
            case 0:
              uVar4 = 0x14;
              break;
            case 1:
            case 8:
              uVar4 = 4;
              break;
            default:
              goto switchD_001f67fc_caseD_2;
            case 7:
              uVar4 = 7;
              break;
            case 9:
              uVar4 = 8;
              break;
            case 10:
              uVar4 = 5;
              break;
            case 0xc:
              FUN_003695cc(DAT_001f6928,DAT_001f6928,DAT_001f6928,fVar10 * fVar2,puVar6,5,4,2);
              goto switchD_001f67fc_caseD_2;
            }
            FUN_003695cc(DAT_001f6928,DAT_001f6928,DAT_001f6928,fVar10 * fVar2,puVar6,uVar4,4,2);
switchD_001f67fc_caseD_2:
            iVar5 = iVar5 + 1;
          } while (iVar5 < 2);
        }
      }
    }
  }
  return;
}

