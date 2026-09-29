// OoT3D decomp @ 00470dd0  name=FUN_00470dd0  size=640

void FUN_00470dd0(int param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  float fVar14;

  iVar6 = DAT_004710b4;
  iVar11 = *(int *)(param_1 + 0x20ac);
  uVar12 = (uint)*(ushort *)(DAT_004710b4 + 0x92);
  iVar4 = FUN_003695f8();
  iVar9 = DAT_004710bc;
  iVar5 = DAT_004710b8;
  if (iVar4 == 0) {
    switch(*(undefined2 *)(param_1 + 0x104)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      iVar4 = DAT_004710b8 + uVar12;
      *(undefined1 *)(param_1 + 0x2db6) = 0;
      if ((*(uint *)(iVar9 + 8) & (uint)*(byte *)(iVar4 + 0xc0)) == 0) {
        *(undefined1 *)(param_1 + 0x2db7) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x2db7) = 1;
      }
      psVar3 = DAT_004710d0;
      fVar14 = *(float *)(iVar11 + 0x2c);
      uVar10 = 0;
      iVar4 = *(int *)(DAT_004710c8 + uVar12 * 4);
      do {
        iVar11 = uVar10 + *(char *)(*(int *)(DAT_004710c0 + uVar12 * 4) +
                                   (int)*(char *)(DAT_004710c4 + param_1)) * 8;
        if (*(float *)(iVar4 + iVar11 * 4) < fVar14) break;
        if (*(float *)(iVar11 * 4 + 4 + iVar4) < fVar14) {
          uVar10 = (uint)(short)((short)uVar10 + 1);
          break;
        }
        uVar10 = (uint)(short)((short)uVar10 + 2);
      } while ((int)uVar10 < 8);
      iVar5 = iVar5 + uVar12 * 0x1c;
      *(uint *)(iVar5 + 0x104) = *(uint *)(iVar5 + 0x104) | *(uint *)(iVar9 + uVar10 * 4);
      iVar5 = *DAT_004710cc;
      *(short *)(iVar5 + 0xf50) = (short)uVar10;
      piVar8 = *(int **)(psVar3 + 4);
      iVar4 = 0;
      iVar9 = (int)*(short *)(*piVar8 + uVar12 * 0x10 + uVar10 * 2) + (int)*(short *)(iVar5 + 0xf2c)
      ;
      if (iVar9 != *(short *)(iVar5 + 0xf2e)) {
        *(short *)(iVar5 + 0xf2e) = (short)iVar9;
      }
      if (*(short *)(param_1 + 0x2e3c) != psVar3[3]) {
        psVar3[3] = *(short *)(param_1 + 0x2e3c);
      }
      if (*(short *)(piVar8[0x17] + uVar12 * 2) != 0) {
        do {
          iVar5 = *(int *)(psVar3 + 4);
          iVar9 = uVar12 * 0x33 + iVar4;
          uVar7 = (uint)*(byte *)(*(int *)(iVar5 + 0x60) + iVar9);
          bVar13 = uVar7 == (int)*(short *)(param_1 + 0x2e3c);
          if (bVar13) {
            uVar7 = (uint)*(byte *)(*(int *)(iVar5 + 100) + iVar9);
          }
          if (bVar13 && uVar7 == uVar10) {
            *(ushort *)(param_1 + 0x2e3c) = (ushort)*(byte *)(*(int *)(iVar5 + 0x68) + iVar9);
            *(undefined2 *)(iVar6 + 0xb0) = 0;
            iVar5 = *(int *)(param_1 + 0x20ac);
            sVar1 = (short)(int)*(float *)(iVar5 + 0x28);
            *psVar3 = sVar1;
            sVar2 = (short)(int)*(float *)(iVar5 + 0x30);
            psVar3[1] = sVar2;
            iVar5 = DAT_004710d4 - *(short *)(iVar5 + 0xbe);
            psVar3[2] = (short)((int)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x16)) >> 10);
            FUN_002d04a8((int)sVar1,(int)sVar2);
          }
          iVar4 = (int)(short)((short)iVar4 + 1);
        } while (iVar4 < (int)(uint)*(ushort *)(*(int *)(*(int *)(psVar3 + 4) + 0x5c) + uVar12 * 2))
        ;
      }
      *(undefined2 *)(*DAT_004710cc + 0xf28) = *(undefined2 *)(param_1 + 0x2e3c);
      return;
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      piVar8 = *(int **)(DAT_004710d0 + 4);
      iVar6 = *DAT_004710cc;
      sVar1 = *(short *)(piVar8[1] + *(short *)(param_1 + 0x104) * 2 + -0x22);
      *(short *)(iVar6 + 0xf50) = sVar1;
      *(short *)(iVar6 + 0xf2e) =
           *(short *)(*piVar8 + *(short *)(param_1 + 0x104) * 0x10 + sVar1 * 2 + -0x110) +
           *(short *)(iVar6 + 0xf2c);
      return;
    }
  }
  return;
}
