// OoT3D decomp @ 0029f8a0  name=FUN_0029f8a0  size=1852

void FUN_0029f8a0(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined2 uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  bool bVar12;
  uint in_fpscr;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;

  local_30 = param_2;
  if ((*(byte *)(param_1 + 0xefd) & 2) == 0) {
    if ((*(byte *)(param_1 + 0x128d) & 2) != 0) {
      *(byte *)(param_1 + 0x128d) = *(byte *)(param_1 + 0x128d) & 0xfd;
      iVar4 = DAT_0029fd34;
      piVar2 = DAT_0029fd30;
      uVar8 = DAT_0029fd2c;
      cVar1 = *(char *)(param_1 + 0xb9);
      bVar12 = cVar1 == '\0';
      if (bVar12) {
        cVar1 = *(char *)(param_1 + 0xb8);
      }
      if (bVar12 && cVar1 == '\0') {
        FUN_003741e4(param_2,0,1,param_1 + 0x3c,0);
        return;
      }
      local_3c = VectorSignedToFloat((int)*(short *)(param_1 + 0x12a2),(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_38 = VectorSignedToFloat((int)*(short *)(param_1 + 0x12a4),(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_34 = VectorSignedToFloat((int)*(short *)(param_1 + 0x12a6),(byte)(in_fpscr >> 0x15) & 3)
      ;
      puVar11 = *(undefined4 **)(param_1 + 0x12b8);
      if (*(int *)(param_1 + 0x22c) == DAT_0029fd28) {
        iVar6 = FUN_00375eb8(param_1);
        if (iVar6 == 0) {
          FUN_00375b70(param_2,param_1);
          uVar7 = *(undefined4 *)(DAT_0029fd38 + param_2);
          FUN_00370350(uVar8,param_1 + 0x1a4,0x19);
          FUN_0037547c(DAT_0029fd44,param_1 + 0xee0,4,DAT_0029fd40,DAT_0029fd40,DAT_0029fd3c);
          FUN_00375ed8(param_1,0x400000,0xff,0,0x5a);
          FUN_00375ed8(*piVar2,0x400000,0xff,0,0x5a);
          FUN_00375ed8(piVar2[1],0x400000,0xff,0,0x5a);
          *(undefined2 *)(param_1 + 0x234) = 0x5a;
          *(byte *)(param_1 + 0x128d) = *(byte *)(param_1 + 0x128d) & 0xfe;
          *(byte *)(param_1 + 0xefe) = *(byte *)(param_1 + 0xefe) & 0xfe;
          *(byte *)(*piVar2 + 0xefe) = *(byte *)(*piVar2 + 0xefe) & 0xfe;
          *(byte *)(piVar2[1] + 0xefe) = *(byte *)(piVar2[1] + 0xefe) & 0xfe;
          FUN_003655d0(0,1);
          uVar8 = DAT_0029fd4c;
          iVar6 = DAT_0029fd48;
          *(undefined2 *)(DAT_0029fd48 + 10) = 0;
          *(undefined1 *)(iVar6 + 8) = 1;
          *(int **)(iVar6 + 4) = piVar2 + 100;
          *(undefined1 *)(iVar6 + 9) = 0;
          *(undefined4 *)(iVar6 + 0x18) = uVar8;
          *(undefined4 *)(iVar6 + 0x1c) = uVar8;
          uVar3 = FUN_00367d74(param_2);
          *(undefined2 *)(piVar2 + -0x22) = uVar3;
          FUN_00320d7c(param_2,0,1);
          FUN_00320d7c(param_2,(int)(short)piVar2[-0x22],7);
          FUN_00338654(param_2,(int)(short)piVar2[-0x22],0);
          FUN_0036e980(param_2,uVar7,8);
          FUN_00367494(param_2,param_2 + 0x2298);
          FUN_0036df4c(DAT_0029fd54,
                       *(int *)(param_2 + *(short *)(DAT_0029fd50 + param_2) * 4 + 0xa54) + 0x8c);
          uVar8 = DAT_0029fd58;
        }
        else {
          FUN_00374a58(DAT_0029fd5c,param_1 + 0x1a4,0x16);
          uVar8 = FUN_0036ae14(param_1 + 0x1a4,0x16);
          FUN_00375ed8(param_1,0x400000,0xff,0,uVar8);
          uVar8 = FUN_0036ae14(param_1 + 0x1a4,0x16);
          FUN_00375ed8(*piVar2,0x400000,0xff,0,uVar8);
          uVar8 = FUN_0036ae14(param_1 + 0x1a4,0x16);
          FUN_00375ed8(piVar2[1],0x400000,0xff,0,uVar8);
          uVar7 = DAT_0029fd40;
          uVar8 = DAT_0029fd3c;
          *(byte *)(param_1 + 0x128d) = *(byte *)(param_1 + 0x128d) & 0xfe;
          FUN_0037547c(DAT_0029fd60,param_1 + 0xee0,4,uVar7,uVar7,uVar8);
          uVar8 = DAT_0029fd64;
        }
        uVar7 = DAT_0029fd6c;
        iVar6 = DAT_0029fd68;
        *(undefined4 *)(param_1 + 0x22c) = uVar8;
        iVar10 = *piVar2;
        *(undefined2 *)(iVar10 + 0xbc) = 0;
        FUN_00374a58(uVar7,iVar10 + 0x1a4,*(undefined4 *)(iVar6 + *(short *)(iVar10 + 0x1c) * 4));
        *(undefined2 *)(iVar10 + 0x234) = 9;
        *(int *)(iVar10 + 0x22c) = iVar4;
        iVar10 = piVar2[1];
        *(undefined2 *)(iVar10 + 0xbc) = 0;
        FUN_00374a58(uVar7,iVar10 + 0x1a4,*(undefined4 *)(iVar6 + *(short *)(iVar10 + 0x1c) * 4));
        *(undefined2 *)(iVar10 + 0x234) = 9;
        *(int *)(iVar10 + 0x22c) = iVar4;
        FUN_003741e4(local_30,*puVar11,0,&local_3c,0);
        return;
      }
      FUN_00374a58(DAT_0029fd2c,param_1 + 0x1a4,0x12);
      uVar8 = FUN_0036ae14(param_1 + 0x1a4,0x12);
      FUN_00375ed8(param_1,0,0xff,0,uVar8);
      uVar7 = DAT_0029fd40;
      uVar8 = DAT_0029fd3c;
      *(byte *)(param_1 + 0xefc) = *(byte *)(param_1 + 0xefc) & 0xfc;
      *(byte *)(param_1 + 0x128d) = *(byte *)(param_1 + 0x128d) & 0xfe;
      *(undefined1 *)(param_1 + 0x230) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff7f;
      FUN_0037547c(DAT_002a0028,param_1 + 0xee0,4,uVar7,uVar7,uVar8);
      *(undefined4 *)(param_1 + 0x22c) = DAT_002a002c;
      uVar8 = DAT_002a0034;
      iVar6 = piVar2[1];
      if (*(int *)(DAT_002a0030 + *(short *)(iVar6 + 0x1c) * 4) == 9) {
        *(undefined2 *)(DAT_002a0038 + iVar6) = 1;
        FUN_00375bcc(iVar6,uVar8);
        iVar10 = 0;
        do {
          iVar9 = iVar6 + iVar10 * 0x2c;
          if (*(short *)(iVar9 + 0x12f4) != 0) {
            *(float *)(iVar9 + 0x12d4) = *(float *)(iVar9 + 0x12d4) + *(float *)(iVar6 + 0x28);
            *(float *)(iVar9 + 0x12d8) = *(float *)(iVar9 + 0x12d8) + *(float *)(iVar6 + 0x2c);
            *(float *)(iVar9 + 0x12dc) = *(float *)(iVar9 + 0x12dc) + *(float *)(iVar6 + 0x30);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < 0x12);
      }
      else {
        iVar6 = *piVar2;
        if (*(int *)(DAT_002a0030 + *(short *)(iVar6 + 0x1c) * 4) == 9) {
          *(undefined2 *)(DAT_002a0038 + iVar6) = 1;
          FUN_00375bcc(iVar6,uVar8);
          iVar10 = 0;
          do {
            iVar9 = iVar6 + iVar10 * 0x2c;
            if (*(short *)(iVar9 + 0x12f4) != 0) {
              *(float *)(iVar9 + 0x12d4) = *(float *)(iVar9 + 0x12d4) + *(float *)(iVar6 + 0x28);
              *(float *)(iVar9 + 0x12d8) = *(float *)(iVar9 + 0x12d8) + *(float *)(iVar6 + 0x2c);
              *(float *)(iVar9 + 0x12dc) = *(float *)(iVar9 + 0x12dc) + *(float *)(iVar6 + 0x30);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < 0x12);
        }
      }
      uVar8 = DAT_002a0040;
      iVar6 = DAT_002a003c;
      iVar10 = piVar2[1];
      FUN_00374a58(DAT_002a0040,iVar10 + 0x1a4,
                   *(undefined4 *)(DAT_002a003c + *(short *)(iVar10 + 0x1c) * 4));
      if (*(int *)(iVar10 + 0x22c) != iVar4) {
        *(undefined1 *)(iVar10 + 0x231) = 0;
      }
      *(byte *)(iVar10 + 0xefc) = *(byte *)(iVar10 + 0xefc) & 0xfc;
      *(undefined1 *)(iVar10 + 0xf00) = 0xc;
      *(byte *)(iVar10 + 0xefd) = *(byte *)(iVar10 + 0xefd) & 0xfd | 5;
      uVar7 = FUN_0036ae14(iVar10 + 0x1a4,0x12);
      FUN_00375ed8(iVar10,0,0xff,0,uVar7);
      uVar7 = DAT_002a0044;
      *(undefined4 *)(iVar10 + 0x22c) = DAT_002a0044;
      iVar10 = *piVar2;
      FUN_00374a58(uVar8,iVar10 + 0x1a4,*(undefined4 *)(iVar6 + *(short *)(iVar10 + 0x1c) * 4));
      if (*(int *)(iVar10 + 0x22c) != iVar4) {
        *(undefined1 *)(iVar10 + 0x231) = 0;
      }
      *(byte *)(iVar10 + 0xefc) = *(byte *)(iVar10 + 0xefc) & 0xfc;
      *(undefined1 *)(iVar10 + 0xf00) = 0xc;
      *(byte *)(iVar10 + 0xefd) = *(byte *)(iVar10 + 0xefd) & 0xfd | 5;
      uVar8 = FUN_0036ae14(iVar10 + 0x1a4,0x12);
      FUN_00375ed8(iVar10,0,0xff,0,uVar8);
      *(undefined4 *)(iVar10 + 0x22c) = uVar7;
      FUN_00365560(local_30,*puVar11,0,&local_3c,0x4b0);
      return;
    }
  }
  else {
    *(byte *)(param_1 + 0xefd) = *(byte *)(param_1 + 0xefd) & 0xfd;
    iVar4 = 0;
    while ((*(byte *)(*(int *)(param_1 + 0xf08) + iVar4 * 0x50 + 0x16) & 2) == 0) {
      iVar4 = iVar4 + 1;
      if (10 < iVar4) {
        return;
      }
    }
    psVar5 = (short *)(iVar4 * 0x50 + 0xe + *(int *)(param_1 + 0xf08));
    local_3c = VectorSignedToFloat((int)*psVar5,(byte)(in_fpscr >> 0x15) & 3);
    local_38 = VectorSignedToFloat((int)psVar5[1],(byte)(in_fpscr >> 0x15) & 3);
    local_34 = VectorSignedToFloat((int)psVar5[2],(byte)(in_fpscr >> 0x15) & 3);
    FUN_003741e4(param_2,**(undefined4 **)(*(int *)(param_1 + 0xf08) + iVar4 * 0x50 + 0x24),2,
                 &local_3c,0);
    FUN_003661a8(local_30,&local_3c,*(undefined1 *)(DAT_0029fd24 + 1));
  }
  return;
}
