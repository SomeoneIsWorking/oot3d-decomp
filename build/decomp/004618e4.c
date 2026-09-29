// OoT3D decomp @ 004618e4  name=FUN_004618e4  size=1448

void FUN_004618e4(undefined4 *param_1,int param_2)

{
  char cVar1;
  float fVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  int local_94;
  int local_90;
  int local_8c [20];
  undefined4 local_3c;
  undefined4 *local_38;

  fVar2 = DAT_00461cd4;
  iVar13 = 0;
  local_94 = 0;
  local_90 = param_2 + 0xc;
  local_38 = param_1 + 0x16ed;
  do {
    for (iVar11 = *(int *)(local_90 + 4); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x130)) {
      FUN_0033b11c(local_38,iVar11 + 0x28,iVar11 + 0xec,iVar11 + 0xf8);
      iVar5 = *(int *)(iVar11 + 0x24);
      if (iVar5 != 0) {
        uVar8 = *(uint *)(iVar11 + 4);
        if ((uVar8 & 0x80000) == 0) {
          if ((uVar8 & 0x100000) == 0 && (uVar8 & 0x200000) == 0) {
            if ((uVar8 & 0x10000000) != 0) {
              FUN_00478d94(0,DAT_00461ce0,iVar5 - 1U & 0xff);
              goto LAB_004619f8;
            }
            iVar9 = iVar11 + 0x28;
          }
          else {
            iVar9 = 0;
          }
        }
        else {
          iVar9 = iVar11 + 0x28;
        }
        FUN_0037547c(iVar5,iVar9,4,DAT_00461cdc,DAT_00461cdc,DAT_00461cd8);
      }
LAB_004619f8:
      fVar15 = *(float *)(iVar11 + 0x100);
      uVar8 = (uint)*(byte *)(iVar11 + 0x120);
      if (*(float *)(iVar11 + 0xfc) + fVar15 <= *(float *)(iVar11 + 0xf4)) {
        *(undefined1 *)(iVar11 + 0x120) = 2;
LAB_00461aa0:
        bVar14 = false;
      }
      else {
        if (*(float *)(iVar11 + 0xf4) <= -fVar15) {
LAB_00461a9c:
          *(undefined1 *)(iVar11 + 0x120) = 1;
          goto LAB_00461aa0;
        }
        fVar16 = fVar2;
        if (0x3f7fffff < (int)*(float *)(iVar11 + 0xf8)) {
          fVar16 = fVar2 / *(float *)(iVar11 + 0xf8);
        }
        if (((0x3f7fffff < (int)((ABS(*(float *)(iVar11 + 0xec)) - fVar15) * fVar16)) ||
            ((uint)DAT_00461ce4 <=
             (uint)((*(float *)(iVar11 + 0xf0) + *(float *)(iVar11 + 0x104)) * fVar16))) ||
           (0x3f7fffff < (int)((*(float *)(iVar11 + 0xf0) - fVar15) * fVar16))) goto LAB_00461a9c;
        bVar14 = true;
        *(undefined1 *)(iVar11 + 0x120) = 0;
      }
      if (bVar14) {
        *(uint *)(iVar11 + 4) = *(uint *)(iVar11 + 4) | 0x40;
        uVar6 = (uint)*(byte *)(iVar11 + 0x19f);
        if (uVar6 == 0) {
          uVar6 = 10;
        }
        if (uVar8 != 1) {
          bVar7 = *(char *)(iVar11 + 0x19e) + 1;
          uVar8 = (uint)bVar7;
          *(byte *)(iVar11 + 0x19e) = bVar7;
          if (uVar8 <= uVar6) goto LAB_00461b2c;
        }
        *(char *)(iVar11 + 0x19e) = (char)uVar6;
      }
      else {
        if (*(char *)(iVar11 + 0x120) == '\x02') {
          cVar1 = *(char *)(iVar11 + 0x19e);
          if ((cVar1 == '\0') || (*(char *)(iVar11 + 0x19e) = cVar1 + -1, cVar1 == '\x01'))
          goto LAB_00461b20;
          uVar6 = *(uint *)(iVar11 + 4) | 0x40;
        }
        else {
          *(undefined1 *)(iVar11 + 0x19e) = 0;
LAB_00461b20:
          uVar6 = *(uint *)(iVar11 + 4) & 0xffffffbf;
        }
        *(uint *)(iVar11 + 4) = uVar6;
      }
LAB_00461b2c:
      *(undefined1 *)(iVar11 + 0x121) = 0;
      if (*(int *)(iVar11 + 0x134) == 0) {
        bVar14 = *(int *)(iVar11 + 0x140) != 0;
        uVar6 = 0;
        if (bVar14) {
          uVar6 = *(uint *)(iVar11 + 4);
        }
        if (bVar14 && (uVar6 & 0x60) != 0) {
          if ((uVar6 & 0x80) == 0) {
LAB_00461b8c:
            FUN_002d5f68(param_1,iVar11);
            *(undefined1 *)(iVar11 + 0x121) = 1;
          }
          else {
            if (*(char *)((int)param_1 + 0x4c35) != '\0') {
              uVar6 = (uint)*(byte *)((int)param_1 + 0x208f);
              bVar14 = uVar6 == 0;
              if (bVar14) {
                uVar6 = (uint)*(char *)(iVar11 + 3);
                uVar8 = (uint)*(char *)(param_1 + 0x130c);
              }
              if (bVar14 && uVar6 == uVar8) goto LAB_00461b8c;
            }
            local_8c[iVar13] = iVar11;
            iVar13 = iVar13 + 1;
          }
        }
      }
    }
    local_94 = local_94 + 1;
    local_90 = local_90 + 8;
    if (0xb < local_94) {
      FUN_00470768(*param_1);
      FUN_00479e70(param_1);
      puVar3 = DAT_00461ce8;
      if (*(char *)((int)param_1 + 0x208f) != '\0') {
        uVar8 = (uint)(*(char *)((int)param_1 + 0x4c35) != '\0');
        if (((*DAT_00461ce8 & 1) == 0) && (iVar11 = FUN_003679b4(DAT_00461ce8), iVar11 != 0)) {
          FUN_0036788c(DAT_00461cec);
        }
        local_3c = DAT_00461cf8;
        FUN_002d5f18(DAT_00461cf8,1,param_1[uVar8 + 0x8a3],9);
        uVar4 = DAT_00461cfc;
        iVar11 = 0;
        uVar10 = extraout_r1;
        piVar12 = local_8c;
        if (0 < iVar13) {
          do {
            if ((*puVar3 & 1) == 0) {
              uVar17 = FUN_003679b4(DAT_00461ce8);
              uVar10 = (int)((ulonglong)uVar17 >> 0x20);
              if ((int)uVar17 != 0) {
                FUN_0036788c(DAT_00461cec);
                uVar10 = DAT_00461cf4;
              }
            }
            FUN_0032d5dc(uVar4,uVar10);
            FUN_002d5f68(param_1,*piVar12);
            iVar11 = iVar11 + 1;
            uVar10 = extraout_r1_00;
            piVar12 = piVar12 + 1;
          } while (iVar11 < iVar13);
        }
        for (piVar12 = (int *)param_1[0x8a0]; piVar12 != (int *)0x0; piVar12 = (int *)*piVar12) {
          (*(code *)piVar12[1])(piVar12[2],param_1);
          uVar10 = extraout_r1_01;
        }
        param_1[0x8a0] = 0;
        if (uVar8 == 0) {
          FUN_002d5b2c(param_1,param_1[0x82b],2);
          uVar10 = extraout_r1_02;
        }
        if ((*puVar3 & 1) == 0) {
          uVar17 = FUN_003679b4(DAT_00461ce8);
          uVar10 = (int)((ulonglong)uVar17 >> 0x20);
          if ((int)uVar17 != 0) {
            FUN_0036788c(DAT_00461cec);
            uVar10 = DAT_00461cf4;
          }
        }
        FUN_0032d5b8(uVar4,uVar10);
        iVar13 = FUN_003695f8();
        uVar10 = DAT_00461eb8;
        if (iVar13 == 0) {
          uVar10 = DAT_00461ebc;
        }
        *(undefined4 *)(*(int *)(param_1[0x8a5] + 0xc) + 0xc) = uVar10;
        if (((*puVar3 & 1) == 0) && (iVar13 = FUN_003679b4(DAT_00461ce8), iVar13 != 0)) {
          FUN_0036788c(DAT_00461cec);
        }
        FUN_002d5f18(local_3c,2,param_1[0x8a5],1);
        iVar13 = FUN_0037571c(param_1);
        if (((iVar13 != 0) || (iVar13 = FUN_0036a7a0(param_1), iVar13 != 0)) &&
           (*(char *)((int)param_1 + 0x208f) != '\0')) {
          *(undefined1 *)((int)param_1 + 0x208f) = 0;
          FUN_0034708c(param_1);
        }
      }
      FUN_0047bfec(param_1);
      piVar12 = DAT_00461ec0;
      if (*(short *)(*DAT_00461ec0 + 0x714) == 0) {
        FUN_0047a5cc(param_1);
      }
      FUN_004792a4(param_1,param_2 + 0x1c0);
      if (*(short *)(*piVar12 + 0xe72) != 0) {
        FUN_0047cacc(param_1,param_1 + 0x171e);
      }
      return;
    }
  } while( true );
}
