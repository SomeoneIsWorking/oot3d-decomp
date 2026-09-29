// OoT3D decomp @ 002c2a2c  name=FUN_002c2a2c  size=1108

undefined1 FUN_002c2a2c(int param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  uint in_fpscr;
  float fVar14;
  undefined8 uVar15;
  undefined4 uStack_28;
  undefined4 local_24 [4];

  puVar13 = &uStack_28;
  switch(*(undefined1 *)(param_2 + 4)) {
  case 0:
    pbVar12 = *(byte **)(param_2 + 8);
    if (*(char *)(param_2 + 5) == '\0') {
      uVar7 = (uint)*(ushort *)(pbVar12 + param_3 * 2);
      goto LAB_00498ae0;
    }
    iVar4 = 0;
    if (0 < param_3) {
      do {
        if (pbVar12 == (byte *)0x0) {
LAB_00498a18:
          iVar11 = 0;
        }
        else {
          bVar2 = *pbVar12;
          if (bVar2 < 0x80) {
            iVar11 = 1;
          }
          else if ((bVar2 & 0xe0) == 0xc0) {
            iVar11 = 2;
          }
          else if ((bVar2 & 0xf0) == 0xe0) {
            iVar11 = 3;
          }
          else {
            if ((bVar2 & 0xf8) != 0xf0) goto LAB_00498a18;
            iVar11 = 4;
          }
        }
        iVar4 = iVar4 + 1;
        pbVar12 = pbVar12 + iVar11;
      } while (iVar4 < param_3);
    }
    if (pbVar12 != (byte *)0x0) {
      bVar2 = *pbVar12;
      if (bVar2 < 0x80) {
        uVar7 = (uint)*pbVar12;
        goto LAB_00498ae0;
      }
      if ((bVar2 & 0xe0) == 0xc0) {
        uVar7 = pbVar12[1] & 0x3f | (*pbVar12 & 0x1f) << 6;
        goto LAB_00498ae0;
      }
      if ((bVar2 & 0xf0) == 0xe0) {
        uVar7 = ((uint)*pbVar12 << 0x1c) >> 0x10 | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
        goto LAB_00498ae0;
      }
      if ((bVar2 & 0xf8) == 0xf0) {
        uVar7 = ((uint)*pbVar12 << 0x1d) >> 0xb | (pbVar12[1] & 0x3f) << 0xc |
                (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f;
        goto LAB_00498ae0;
      }
    }
    uVar7 = 0;
LAB_00498ae0:
    uVar8 = (uint)*(byte *)(param_2 + 5);
    uVar9 = uVar8;
    if (uVar8 < 2) {
      uVar9 = uVar7;
    }
    if (uVar8 >= 2) {
      uVar9 = 0;
    }
    (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),uVar9);
    return 1;
  default:
    return *(undefined1 *)(param_2 + 4);
  case 2:
    (**(code **)(**(int **)(param_1 + 4) + 0x1c))
              (*(int **)(param_1 + 4),*(undefined1 *)(param_2 + 5));
    return 1;
  case 3:
    uVar6 = 3;
    goto LAB_002c2bb8;
  case 5:
    (**(code **)(**(int **)(param_1 + 4) + 0x38))
              (*(int **)(param_1 + 4),*(undefined4 *)(param_2 + 8));
  case 0x1a:
    uVar6 = 3;
    *(undefined1 *)(param_1 + 0x1b) = 1;
LAB_002c2b90:
    *(undefined1 *)(param_1 + 8) = uVar6;
    return 1;
  case 6:
    *(undefined1 *)(param_1 + 0x1a) = 1;
    return 1;
  case 7:
    *(undefined1 *)(param_1 + 0x1a) = 0;
    break;
  case 8:
    (**(code **)(**(int **)(param_1 + 4) + 0x3c))
              (*(int **)(param_1 + 4),0,(int)*(char *)(param_2 + 5));
    *(undefined1 *)(param_1 + 0x1b) = 1;
    *(undefined1 *)(param_1 + 8) = 5;
    return 1;
  case 9:
    (**(code **)(**(int **)(param_1 + 4) + 0x3c))(*(int **)(param_1 + 4),1,0);
    uVar6 = 5;
    *(undefined1 *)(param_1 + 0x1b) = 1;
    goto LAB_002c2b90;
  case 10:
    uVar6 = 4;
    fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(param_2 + 8),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0xc) = fVar14 * DAT_002c2d74;
LAB_002c2bb8:
    *(undefined1 *)(param_1 + 8) = uVar6;
    break;
  case 0xb:
    return 0;
  case 0xc:
    (**(code **)(**(int **)(param_1 + 4) + 0x38))
              (*(int **)(param_1 + 4),*(undefined4 *)(param_2 + 0xc));
    *(undefined1 *)(param_1 + 0x1b) = 1;
    uVar6 = 4;
    fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(param_2 + 8),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0xc) = fVar14 * DAT_002c2d74;
    goto LAB_002c2b90;
  case 0xd:
    pcVar10 = *(code **)(**(int **)(param_1 + 4) + 0x40);
    goto LAB_002c2c60;
  case 0xe:
    piVar3 = *(int **)(param_1 + 4);
    uVar7 = *(uint *)(param_2 + 8);
    pcVar10 = *(code **)(*piVar3 + 0x44);
    goto LAB_002c2c8c;
  case 0xf:
    piVar3 = *(int **)(param_1 + 4);
    uVar7 = *(uint *)(param_2 + 8);
    pcVar10 = *(code **)(*piVar3 + 0x48);
    goto LAB_002c2c8c;
  case 0x10:
    piVar3 = *(int **)(param_1 + 4);
    uVar7 = *(uint *)(param_2 + 8);
    pcVar10 = *(code **)(*piVar3 + 0x4c);
    goto LAB_002c2c8c;
  case 0x11:
    pcVar10 = *(code **)(**(int **)(param_1 + 4) + 0x50);
LAB_002c2c60:
    (*pcVar10)();
    break;
  case 0x12:
    iVar4 = *(int *)(param_2 + 8);
    if (iVar4 < 1) {
      iVar4 = 0;
    }
    *(int *)(param_1 + 0x14) = iVar4;
    break;
  case 0x13:
    piVar3 = *(int **)(param_1 + 4);
    uVar7 = (uint)*(ushort *)(param_2 + 6);
    pcVar10 = *(code **)(*piVar3 + 0x54);
LAB_002c2c8c:
    (*pcVar10)(piVar3,uVar7);
    break;
  case 0x14:
    *(undefined1 *)(param_1 + 0x19) = 1;
    return 1;
  case 0x15:
    iVar4 = *(int *)(param_2 + 8);
    if (0 < iVar4) {
      iVar5 = 0;
      iVar11 = iVar4;
      do {
        puVar13 = puVar13 + 1;
        iVar1 = iVar5 * 4;
        iVar11 = iVar11 + -1;
        iVar5 = iVar5 + 1;
        *puVar13 = *(undefined4 *)(param_2 + iVar1 + 0xc);
      } while (iVar11 != 0);
    }
    (**(code **)(**(int **)(param_1 + 4) + 0x58))(*(int **)(param_1 + 4),iVar4,local_24);
    break;
  case 0x18:
    *(undefined4 *)(param_1 + 0x2c) = 0;
    iVar11 = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0xc);
    iVar4 = *(int *)(param_1 + 0x1c);
    while( true ) {
      iVar4 = iVar4 + 1;
      uVar15 = (**(code **)(**(int **)(param_1 + 4) + 0x10))(*(int **)(param_1 + 4),iVar4);
      uVar7 = (uint)((ulonglong)uVar15 >> 0x20);
      piVar3 = (int *)uVar15;
      if (piVar3 != (int *)0x0) {
        uVar7 = (uint)*(byte *)(piVar3 + 1);
      }
      if (piVar3 == (int *)0x0 || uVar7 == 0x18) break;
      if (uVar7 == 0x19) goto LAB_002c2d58;
      iVar5 = (**(code **)(*piVar3 + 0x14))();
      iVar11 = iVar11 + iVar5;
    }
    iVar11 = 0;
LAB_002c2d58:
    *(int *)(param_1 + 0x34) = iVar11;
    break;
  case 0x19:
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return 1;
}
