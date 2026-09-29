// OoT3D decomp @ 0028da40  name=FUN_0028da40  size=1700

void FUN_0028da40(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  byte bVar4;
  undefined2 uVar5;
  short sVar6;
  undefined2 *puVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  uint in_fpscr;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;

  bVar1 = *(byte *)(param_1 + 0x128c);
  if ((bVar1 & 1) != 0) {
    if (4 < *(short *)(param_1 + 0x12f4)) {
      fVar18 = *(float *)(param_1 + 0x98);
      fVar17 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(DAT_0028dd58 + param_1),
                                 (byte)(in_fpscr >> 0x15) & 3);
      fVar17 = *(float *)(DAT_0028dd54 + 0x20) * fVar17 * DAT_0028dd5c;
      uVar12 = in_fpscr & 0xfffffff | (uint)(fVar17 < fVar18) << 0x1f |
               (uint)(fVar17 == fVar18) << 0x1e;
      in_fpscr = uVar12 | (uint)(NAN(fVar17) || NAN(fVar18)) << 0x1c;
      bVar4 = (byte)(uVar12 >> 0x18);
      bVar13 = (bool)(bVar4 >> 6 & 1);
      if (bVar13 || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        bVar13 = (bVar1 & 2) == 0;
      }
      if (bVar13) {
        fVar17 = (float)VectorUnsignedToFloat
                                  ((uint)*(ushort *)(param_1 + 0x12f2),(byte)(in_fpscr >> 0x15) & 3)
        ;
        *(float *)(param_1 + 0x12bc) = *(float *)(DAT_0028dd54 + 0x20) * fVar17 * DAT_0028dd5c;
        goto LAB_0028dad0;
      }
    }
    *(byte *)(param_1 + 0x128c) = bVar1 & 0xfc;
  }
LAB_0028dad0:
  iVar10 = DAT_0028dd64;
  uVar16 = DAT_0028dd60;
  if ((*(byte *)(param_1 + 0xefd) & 2) != 0) {
    if (*(char *)(param_1 + 0xf00) == '\f') {
      iVar11 = 0;
      do {
        if ((*(byte *)(*(int *)(param_1 + 0xf08) + iVar11 * 0x50 + 0x16) & 2) != 0) {
          psVar8 = (short *)(iVar11 * 0x50 + 0xe + *(int *)(param_1 + 0xf08));
          local_38 = VectorSignedToFloat((int)*psVar8,(byte)(in_fpscr >> 0x15) & 3);
          local_34 = VectorSignedToFloat((int)psVar8[1],(byte)(in_fpscr >> 0x15) & 3);
          local_30 = VectorSignedToFloat((int)psVar8[2],(byte)(in_fpscr >> 0x15) & 3);
          FUN_003741e4(param_2,0,1,&local_38,0);
          FUN_0034e568(param_2,&local_38,*DAT_0028e118);
          break;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 0xb);
    }
    else {
      *(byte *)(param_1 + 0xefd) = *(byte *)(param_1 + 0xefd) & 0xfd;
      cVar2 = *(char *)(param_1 + 0xb9);
      bVar13 = true;
      bVar14 = cVar2 == '\0';
      if (bVar14) {
        cVar2 = *(char *)(param_1 + 0xb8);
      }
      if (bVar14 && cVar2 == '\0') {
        FUN_003741e4(param_2,0,1,param_1 + 0x3c,0);
        goto LAB_0028df38;
      }
      *(byte *)(param_1 + 0xefc) = *(byte *)(param_1 + 0xefc) & 0xfc;
      *(byte *)(param_1 + 0xefd) = *(byte *)(param_1 + 0xefd) & 0xfe;
      *(byte *)(param_1 + 0xefe) = *(byte *)(param_1 + 0xefe) & 0xfb;
      iVar11 = *(int *)(param_2 + 0x20ac);
      if (*(int *)(iVar11 + 0x124) == param_1) {
        *(undefined4 *)(iVar11 + 0x124) = 0;
        *(undefined2 *)(iVar11 + 0x2238) = 100;
        *(byte *)(param_1 + 0xefe) = *(byte *)(param_1 + 0xefe) | 1;
        *(byte *)(*(int *)(param_1 + 0x128) + 0xefe) =
             *(byte *)(*(int *)(param_1 + 0x128) + 0xefe) | 1;
        FUN_00374bb8(uVar16,uVar16,param_2,param_1,(int)*(short *)(param_1 + 0xbe));
      }
      iVar11 = *(int *)(param_1 + 0x128);
      if (*(int *)(iVar10 + *(short *)(iVar11 + 0x1c) * 4) == 6) {
        iVar9 = *(int *)(param_2 + 0x20ac);
        if (*(int *)(iVar9 + 0x124) == iVar11) {
          *(undefined4 *)(iVar9 + 0x124) = 0;
          *(undefined2 *)(iVar9 + 0x2238) = 100;
          *(byte *)(iVar11 + 0xefe) = *(byte *)(iVar11 + 0xefe) | 1;
          *(byte *)(*(int *)(iVar11 + 0x128) + 0xefe) =
               *(byte *)(*(int *)(iVar11 + 0x128) + 0xefe) | 1;
          FUN_00374bb8(uVar16,uVar16,param_2,iVar11,(int)*(short *)(iVar11 + 0xbe));
        }
        FUN_003672b8(*(undefined4 *)(param_1 + 0x128));
      }
      *(undefined1 *)(param_1 + 0x1ae1) = 0x5a;
      uVar15 = DAT_0028e110;
      if (*(char *)(param_1 + 0xb9) == '\x03') {
        *(undefined4 *)(iVar10 + *(short *)(param_1 + 0x1c) * 4) = 9;
        FUN_0036df4c(param_1 + 0xee0,param_1 + 0x28);
        uVar15 = DAT_0028dd6c;
        iVar9 = *(int *)(param_1 + 0x128);
        *(undefined4 *)(iVar10 + *(short *)(iVar9 + 0x1c) * 4) = 10;
        FUN_00374a58(uVar15,iVar9 + 0x1a4,
                     *(undefined4 *)(DAT_0028dd68 + *(short *)(iVar9 + 0x1c) * 4));
        iVar11 = DAT_0028dd70;
        *(undefined1 *)(iVar9 + 0x231) = 0;
        *(undefined2 *)(iVar11 + iVar9) = 0;
        if (*(char *)(iVar9 + 0x232) == '\x01') {
          *(undefined1 *)(iVar9 + 0x232) = 0;
        }
        uVar15 = FUN_00363e64(iVar9,*(int *)(iVar9 + 0x128) + 0xee0);
        *(undefined4 *)(iVar9 + 0xedc) = uVar15;
        uVar5 = FUN_00367358(iVar9,*(int *)(iVar9 + 0x128) + 0xee0);
        *(undefined2 *)(iVar9 + 0x240) = uVar5;
        *(byte *)(iVar9 + 0xefd) = *(byte *)(iVar9 + 0xefd) & 0xfd;
        *(undefined1 *)(iVar9 + 0xf00) = 0xc;
        *(byte *)(iVar9 + 0xefd) = *(byte *)(iVar9 + 0xefd) | 4;
        *(undefined4 *)(iVar9 + 0x22c) = DAT_0028dd74;
        *(undefined1 *)(param_1 + 0x231) = 0;
        *(undefined1 *)(param_1 + 0x232) = 1;
        *(undefined2 *)(param_1 + 0x234) = 0x23;
        puVar7 = (undefined2 *)(param_1 + 0x12c8);
        iVar11 = 9;
        do {
          puVar7[0x16] = 0;
          iVar11 = iVar11 + -1;
          puVar7 = puVar7 + 0x2c;
          *puVar7 = 0;
        } while (iVar11 != 0);
        FUN_00354014(param_1,0);
        FUN_00375ed8(param_1,0,0xff,0,10);
        uVar15 = DAT_0028dd78;
        *(undefined2 *)(param_1 + 0x236) = 0;
        *(undefined4 *)(param_1 + 0x22c) = uVar15;
      }
      else {
        *(undefined4 *)(iVar10 + *(short *)(param_1 + 0x1c) * 4) = 8;
        FUN_00374a58(uVar15,param_1 + 0x1a4,
                     *(undefined4 *)(DAT_0028e10c + *(short *)(param_1 + 0x1c) * 4));
        *(undefined2 *)(param_1 + 0x234) = 0x24;
        FUN_0036df4c(param_1 + 0xee0,param_1 + 0x28);
        FUN_00375ed8(param_1,0,0xff,0,300);
        *(undefined4 *)(param_1 + 0x22c) = DAT_0028e114;
        if (*(int *)(iVar10 + *(short *)(*(int *)(param_1 + 0x128) + 0x1c) * 4) != 8) {
          bVar13 = false;
        }
      }
      iVar11 = *(int *)(DAT_0028e118 + 0x30);
      if (bVar13) {
        FUN_00374a58(DAT_0028e11c,iVar11 + 0x1a4,0x15);
      }
      else {
        FUN_00374a58(DAT_0028e11c,iVar11 + 0x1a4,0x14);
      }
      uVar15 = 8;
      *(undefined4 *)(iVar11 + 0x22c) = DAT_0028e120;
      if (*(short *)(param_1 + 0x1c) == 1) {
        uVar15 = 0xf;
      }
      FUN_0036df58(param_2,param_1 + 0x28,uVar15);
      FUN_00375bcc(param_1,DAT_0028e124);
    }
  }
  if ((*(char *)(DAT_0028e128 + param_1) != '\0') &&
     (cVar2 = *(char *)(DAT_0028e128 + param_1) + -1, *(char *)(param_1 + 0x1ae1) = cVar2,
     cVar2 < '\x01')) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
LAB_0028df38:
  (**(code **)(param_1 + 0x22c))(param_1,param_2);
  FUN_00376340(DAT_0028e130,DAT_0028e12c,uVar16,param_2,param_1,5);
  FUN_0037322c(uVar16,param_1);
  if ((*(byte *)(param_1 + 0xefc) & 1) != 0) {
    FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0xeec);
  }
  iVar9 = *(int *)(*(int *)(DAT_0028e118 + 0x30) + 0x22c);
  iVar11 = DAT_0028e134;
  if (iVar9 != DAT_0028e134) {
    iVar11 = DAT_0028e138;
  }
  if ((iVar9 != DAT_0028e134 && iVar9 != iVar11) && ((*(byte *)(param_1 + 0xefd) & 1) != 0)) {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0xeec);
  }
  if ((*(byte *)(param_1 + 0xefe) & 1) != 0) {
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0xeec);
  }
  if ((*(byte *)(param_1 + 0x128c) & 1) != 0) {
    FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x127c);
  }
  iVar10 = *(int *)(iVar10 + *(short *)(param_1 + 0x1c) * 4);
  if (((iVar10 == 0xb || iVar10 == 0) || iVar10 == 1) || iVar10 == 9) {
    sVar6 = *(short *)(param_1 + 0x15ee) + -1;
    *(short *)(param_1 + 0x15ee) = sVar6;
    if (sVar6 < 0) {
      sVar6 = 0;
    }
  }
  else {
    sVar6 = *(short *)(param_1 + 0x15ee) + 1;
    *(short *)(param_1 + 0x15ee) = sVar6;
    if (7 < sVar6) {
      sVar6 = 7;
    }
  }
  *(short *)(param_1 + 0x15ee) = sVar6;
  iVar11 = param_1 + *(short *)(param_1 + 0x15ec) * 0x1c;
  FUN_0036df4c(iVar11 + 0x15f0,param_1 + 0x28);
  iVar10 = DAT_0028e13c;
  *(undefined2 *)(iVar11 + 0x15fc) = *(undefined2 *)(param_1 + 0xbc);
  *(undefined2 *)(iVar11 + 0x15fe) = *(undefined2 *)(param_1 + 0xbe);
  *(undefined2 *)(iVar11 + 0x1600) = *(undefined2 *)(param_1 + 0xc0);
  uVar16 = VectorSignedToFloat((int)*(short *)(param_1 + 0x23a),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(iVar11 + 0x1604) = uVar16;
  *(undefined2 *)(iVar11 + 0x1608) = *(undefined2 *)(param_1 + 0x23c);
  uVar12 = (int)*(short *)(param_1 + 0x15ec) + 1;
  lVar3 = (longlong)(int)uVar12 * (longlong)iVar10 + ((ulonglong)uVar12 << 0x20);
  *(short *)(param_1 + 0x15ec) =
       ((short)(int)(lVar3 >> 0x22) - (short)(lVar3 >> 0x3f)) * -7 + (short)uVar12;
  FUN_00326e74(param_1,param_2);
  return;
}
