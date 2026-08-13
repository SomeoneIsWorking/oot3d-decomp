// OoT3D decomp @ 0020a668  name=FUN_0020a668  size=1928

void FUN_0020a668(int param_1,int param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  uint *puVar13;
  undefined4 uVar14;
  bool bVar15;
  bool bVar16;
  uint in_fpscr;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;

  *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_2 + 0x7f44);
  *(undefined1 *)(param_1 + 0x2b4) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffbff;
  *(short *)(param_1 + 700) = *(short *)(param_1 + 700) + 1;
  *(short *)(param_1 + 0x2ba) = *(short *)(param_1 + 0x2ba) + 1;
  (**(code **)(param_1 + 0x2b0))(param_1,param_2);
  iVar7 = 0;
  do {
    iVar10 = param_1 + iVar7 * 2;
    sVar12 = *(short *)(iVar10 + 0x2dc);
    iVar7 = (int)(short)((short)iVar7 + 1);
    if (sVar12 != 0) {
      *(short *)(iVar10 + 0x2dc) = sVar12 + -1;
    }
    fVar3 = fRam0020aa14;
    fVar2 = fRam0020aa10;
  } while (iVar7 < 5);
  if (*(short *)(param_1 + 0x2c6) != 0) {
    *(short *)(param_1 + 0x2c6) = *(short *)(param_1 + 0x2c6) + -1;
  }
  if (*(short *)(param_1 + 0x2ca) != 0) {
    *(short *)(param_1 + 0x2ca) = *(short *)(param_1 + 0x2ca) + -1;
  }
  iStack_40 = param_1 + 0x800;
  if (*(short *)(param_1 + 0x818) == 0) {
    if (*(short *)(param_1 + 0x2ca) == 0) {
      iVar7 = *(int *)(param_1 + 0x124);
      if (*(int *)(param_1 + 0x2b0) == iRam0020aa18) {
        iVar10 = 0;
        uVar14 = *(undefined4 *)(iRam0020aa1c + param_2);
        do {
          iVar11 = iVar10 * 0x50 + 0x15;
          bVar1 = *(byte *)(*(int *)(param_1 + 0x8a8) + iVar11);
          if ((bVar1 & 2) != 0) {
            *(byte *)(*(int *)(param_1 + 0x8a8) + iVar11) = bVar1 & 0xfd;
            func_0x00375bcc(uVar14,uRam0020aa20);
          }
          iVar10 = (int)(short)((short)iVar10 + 1);
        } while (iVar10 < 9);
      }
      if (*(char *)(iVar7 + 0x93f) == '\0') {
        *(undefined1 *)(*(int *)(param_1 + 0x8a8) + 0x14) = 2;
        *(undefined1 *)(param_1 + 0x8a0) = 9;
      }
      else {
        *(undefined1 *)(*(int *)(param_1 + 0x8a8) + 0x14) = 3;
        *(undefined1 *)(param_1 + 0x8a0) = 3;
      }
      bVar1 = *(byte *)(*(int *)(param_1 + 0x8a8) + 0x16);
      if ((bVar1 & 2) != 0) {
        *(byte *)(*(int *)(param_1 + 0x8a8) + 0x16) = bVar1 & 0xfd;
        fVar19 = fRam0020aa24;
        iVar10 = *(int *)(param_1 + 0x8a8);
        puVar13 = *(uint **)(iVar10 + 0x24);
        uStack_4c = VectorSignedToFloat((int)*(short *)(iVar10 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
        uStack_48 = VectorSignedToFloat((int)*(short *)(iVar10 + 0x10),(byte)(in_fpscr >> 0x15) & 3)
        ;
        uStack_44 = VectorSignedToFloat((int)*(short *)(iVar10 + 0x12),(byte)(in_fpscr >> 0x15) & 3)
        ;
        if (*(char *)(iVar7 + 0x93f) == '\0') {
          if ((*puVar13 & 0x40000040) == 0) {
            func_0x003741e4(param_2,*puVar13,1,&uStack_4c,0);
            func_0x00375f90(param_2,&uStack_4c,*puRam0020aa40);
          }
          else {
            cVar5 = *(char *)(iVar7 + 0xb7) + -2;
            *(char *)(iVar7 + 0xb7) = cVar5;
            if (cVar5 < '\x03') {
              *(undefined1 *)(iVar7 + 0xb7) = 1;
            }
            func_0x00260008(iVar7);
            if (*piRam0020aa28 == 0) {
              *(float *)(*(int *)(param_1 + 0x2a4) + 8) = fVar2;
              func_0x003586ec();
            }
            *(undefined1 *)(*(int *)(param_1 + 0x2a4) + 0x10) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x2a4) + 0x11) = 0;
            FUN_00373d40(param_1 + 0x1a4,8);
            uVar8 = FUN_0036ae14(param_1 + 0x1a4,8);
            uVar14 = uRam0020aa30;
            iVar10 = iRam0020aa2c;
            uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
            *(undefined4 *)(param_1 + 0x310) = uVar8;
            *(int *)(param_1 + 0x2b0) = iVar10;
            *(undefined2 *)(param_1 + 0x2b8) = 0;
            *(undefined2 *)(param_1 + 0x2ca) = 0x1e;
            *(undefined2 *)(param_1 + 0x2c6) = 5;
            func_0x00375bcc(param_1,uVar14);
            fVar4 = fRam0020aa3c;
            uVar8 = uRam0020aa38;
            uVar14 = uRam0020aa34;
            sVar12 = 0;
            do {
              fStack_58 = fVar2;
              fStack_54 = fVar2;
              fStack_50 = fVar2;
              fStack_64 = fVar2;
              fStack_60 = fVar19;
              fStack_5c = fVar2;
              fStack_58 = (float)func_0x003738a8(uVar14);
              fStack_54 = (float)func_0x00371e50(uVar8);
              fStack_54 = fStack_54 + fVar4;
              fStack_50 = (float)func_0x003738a8(uVar14);
              uStack_70 = *(undefined4 *)(param_1 + 0x3c);
              uStack_6c = *(undefined4 *)(param_1 + 0x40);
              fStack_68 = *(float *)(param_1 + 0x44);
              fVar17 = (float)func_0x00371e50(uVar14);
              uVar18 = VectorSignedToFloat((short)(int)fVar17 + 10,(byte)(in_fpscr >> 0x15) & 3);
              func_0x00335814(uVar18,iVar7 + 0x2924,&uStack_70,&fStack_58,&fStack_64);
              sVar12 = sVar12 + 1;
            } while (sVar12 < 0xd);
            func_0x00365560(param_2,*puVar13,0,&uStack_4c,(int)*(short *)(puRam0020aa40 + 2));
          }
        }
        else {
          iVar10 = func_0x003656fc(param_2,*puVar13);
          bVar16 = iVar10 == 0;
          if (bVar16) {
            if ((*puVar13 & 0x1000) == 0) {
              iVar10 = 2;
            }
            else {
              iVar10 = 4;
            }
          }
          bVar1 = *(byte *)(iVar7 + 0xb7);
          fStack_50 = (float)(uint)bVar1;
          if ((*puVar13 & 0x80) != 0) {
            iVar10 = 0;
          }
          bVar15 = bVar1 == 2;
          if ((char)bVar1 < '\x03') {
            bVar15 = bVar16;
          }
          if (!bVar15) {
            *(byte *)(iVar7 + 0xb7) = bVar1 - (char)iVar10;
          }
          if (*(char *)(iVar7 + 0xb7) < '\x01') {
            *(undefined1 *)(iVar7 + 0xb7) = 0;
            uVar18 = FUN_0036ae14(param_1 + 0x1a4,6);
            uVar8 = uRam0020ae28;
            uVar14 = uRam0020ae24;
            uVar18 = VectorSignedToFloat(uVar18,(byte)(in_fpscr >> 0x15) & 3);
            *(undefined4 *)(param_1 + 0x310) = uVar18;
            func_0x00375c08(uVar8,fVar2,uVar18,uVar14,param_1 + 0x1a4,6,3);
            *(undefined4 *)(param_1 + 0x2b0) = uRam0020ae2c;
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
            *(undefined2 *)(iStack_40 + 0x18) = 0;
            uVar14 = uRam0020ae30;
            *(undefined2 *)(param_1 + 0x2c6) = 10;
            *(short *)(param_1 + 0x2ca) = (short)uVar14;
            FUN_003655d0(0,1);
            func_0x00375bcc(param_1,uRam0020ae34);
            func_0x00375b70(param_2,param_1);
          }
          else if (iVar10 != 0) {
            FUN_00373d40(param_1 + 0x1a4,5);
            uVar8 = FUN_0036ae14(param_1 + 0x1a4,5);
            uVar14 = uRam0020ae3c;
            iVar10 = iRam0020ae38;
            uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
            *(undefined4 *)(param_1 + 0x310) = uVar8;
            *(int *)(param_1 + 0x2b0) = iVar10;
            *(undefined2 *)(param_1 + 0x2b8) = 0;
            *(undefined2 *)(param_1 + 0x2c6) = 10;
            *(undefined2 *)(param_1 + 0x2ca) = 100;
            func_0x00375bcc(param_1,uVar14);
          }
          fVar4 = fRam0020ae40;
          if ((float)(uint)*(byte *)(iVar7 + 0xb7) == fStack_50) {
            if ((*puVar13 & 0x80) == 0) {
              func_0x003741e4(param_2,*puVar13,1,&uStack_4c,0);
              func_0x0034e568(param_2,&uStack_4c,*puRam0020aa40);
            }
          }
          else {
            sVar12 = 0;
            do {
              fStack_5c = fVar2;
              fStack_58 = fVar2;
              fStack_54 = fVar2;
              fStack_68 = fVar2;
              fStack_64 = fVar19;
              fStack_60 = fVar2;
              fStack_5c = (float)func_0x003738a8(fVar4);
              fStack_58 = (float)func_0x00371e50(fVar3);
              fStack_58 = fStack_58 + fVar4;
              fStack_54 = (float)func_0x003738a8(fVar4);
              uStack_74 = *(undefined4 *)(param_1 + 0x3c);
              uStack_70 = *(undefined4 *)(param_1 + 0x40);
              uStack_6c = *(undefined4 *)(param_1 + 0x44);
              fVar17 = (float)func_0x00371e50(fVar4);
              uVar14 = VectorSignedToFloat((short)(int)fVar17 + 10,(byte)(in_fpscr >> 0x15) & 3);
              func_0x001f285c(uVar14,iVar7 + 0x2924,&uStack_74,&fStack_5c,&fStack_68);
              sVar12 = sVar12 + 1;
            } while (sVar12 < 0xd);
            func_0x003741e4(param_2,*puVar13,0,&uStack_4c,0);
          }
        }
      }
    }
    func_0x00376168(param_2);
    func_0x003762a4(param_2,param_2 + 0x5c78,param_1 + 0x88c);
    if (*(char *)(param_1 + 0x2b4) == '\0') {
      func_0x003761f0(param_2,param_2 + 0x5c78,param_1 + 0x88c);
    }
  }
  uStack_4c = *puRam0020ae44;
  uStack_48 = puRam0020ae44[1];
  uStack_44 = puRam0020ae44[2];
  if (((*(ushort *)(param_1 + 700) & 7) == 0) && (iVar7 = func_0x003759d0(), iVar7 < iRam0020ae48))
  {
    *(undefined2 *)(param_1 + 0x2c2) = 4;
  }
  iVar10 = *(int *)(param_1 + 0x2b0);
  iVar7 = iRam0020aa2c;
  if (iVar10 != iRam0020aa2c) {
    iVar7 = iRam0020ae38;
  }
  if (iVar10 != iRam0020aa2c && iVar10 != iVar7) {
    uVar6 = (undefined1)*(undefined2 *)((int)&uStack_4c + *(short *)(param_1 + 0x2c2) * 2);
  }
  else {
    if ((*(ushort *)(param_1 + 700) & 8) != 0) {
      *(undefined1 *)(param_1 + 0x33b) = 1;
      goto LAB_0020ad6c;
    }
    uVar6 = 2;
  }
  *(undefined1 *)(param_1 + 0x33b) = uVar6;
LAB_0020ad6c:
  if (*(short *)(param_1 + 0x2c2) != 0) {
    *(short *)(param_1 + 0x2c2) = *(short *)(param_1 + 0x2c2) + -1;
  }
  fVar19 = fRam0020ae4c;
  uVar14 = uRam0020ae50;
  if ((*(short *)(param_1 + 0x2c4) == 0) &&
     (fVar19 = fVar2, uVar14 = uRam0020ae58, (*(ushort *)(param_1 + 700) & 0x10) != 0)) {
    fVar19 = fRam0020ae54;
  }
  func_0x00373500(fVar19,uRam0020ae5c,uVar14,param_1 + 0x814);
  uVar14 = uRam0020ae60;
  if (*(short *)(param_1 + 0x2c4) != 0) {
    *(short *)(param_1 + 0x2c4) = *(short *)(param_1 + 0x2c4) + -1;
  }
  iVar7 = iRam0020ae6c;
  *(float *)(param_1 + 0x2e8) = *(float *)(param_1 + 0x2e8) + fVar3;
  *(undefined4 *)(param_1 + 0x2ec) = uVar14;
  fVar2 = fRam0020ae68;
  *(float *)(param_1 + 0x2f0) = *(float *)(param_1 + 0x2f0) + fRam0020ae64;
  *(float *)(param_1 + 0x2f4) = *(float *)(param_1 + 0x2f4) - fVar2;
  if (*(int *)(param_1 + 0x40) < iVar7) {
    uVar9 = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  else {
    uVar9 = *(uint *)(param_1 + 4) | 1;
  }
  *(uint *)(param_1 + 4) = uVar9;
  return;
}
