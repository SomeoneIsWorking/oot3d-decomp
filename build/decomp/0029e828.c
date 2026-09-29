// OoT3D decomp @ 0029e828  name=FUN_0029e828  size=1576

void FUN_0029e828(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint in_fpscr;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;

  uVar2 = DAT_0029eba0;
  uVar6 = DAT_0029eb9c;
  uVar1 = DAT_0029eb98;
  iVar7 = DAT_0029eb94;
  if (*(short *)(param_1 + 0x75c) != 0) {
    *(short *)(param_1 + 0x75c) = *(short *)(param_1 + 0x75c) + -1;
  }
  if (*(int *)(iVar7 + 0x5c) != 0) {
    *(undefined4 *)(iVar7 + 0x5c) = 0;
    *(undefined2 *)(param_1 + 0x764) = 0;
  }
  iVar9 = DAT_0029eba4;
  if (*(short *)(param_1 + 0x764) < 1) {
    if (*(int *)(param_1 + 0x760) != DAT_0029eba4) {
      *(undefined4 *)(param_1 + 0x7b4) = uVar1;
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      uVar3 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(iVar7 + 0x30));
      uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00353020(uVar2,uVar1,uVar3,uVar6,param_1 + 0x1a4,DAT_0029eba8,2);
      uVar1 = DAT_0029ebac;
      *(int *)(param_1 + 0x760) = iVar9;
      FUN_00375bcc(param_1,uVar1);
      *(undefined2 *)(param_1 + 0x7aa) = 0;
      *(undefined2 *)(param_1 + 0x76c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffa;
      *(undefined2 *)(param_1 + 0x78c) = 1;
      FUN_003655d0(0,1);
      FUN_00375b70(param_2,param_1);
    }
  }
  else {
    if ((*(short *)(param_1 + 0x790) != 0) && (*(short *)(param_1 + 0x75c) == 0)) {
      iVar9 = 0;
      do {
        if ((*(byte *)(*(int *)(param_1 + 0xa2c) + iVar9 * 0x50 + 0x16) & 2) != 0) {
          FUN_00375bcc(param_1,DAT_0029ebb0);
          *(undefined2 *)(param_1 + 0x75c) = 5;
          puVar11 = *(uint **)(*(int *)(param_1 + 0xa2c) + iVar9 * 0x50 + 0x24);
          psVar4 = (short *)(*(int *)(param_1 + 0xa2c) + iVar9 * 0x50 + 0xe);
          local_48 = VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
          local_44 = VectorSignedToFloat((int)psVar4[1],(byte)(in_fpscr >> 0x15) & 3);
          local_40 = VectorSignedToFloat((int)psVar4[2],(byte)(in_fpscr >> 0x15) & 3);
          if (iVar9 == 0) {
            FUN_003741e4(param_2,*puVar11,1,&local_48,0);
          }
          else {
            FUN_003741e4(param_2,*puVar11,2,&local_48,0);
            if ((*puVar11 & 5) == 0) {
              FUN_003661a8(param_2,&local_48,4);
            }
          }
          iVar9 = FUN_003656fc(param_2,*puVar11);
          if (iVar9 != 0) {
            FUN_0032d674(param_2);
          }
          break;
        }
        iVar9 = (int)(short)((short)iVar9 + 1);
      } while (iVar9 < 0x13);
    }
    if (*(int *)(param_1 + 0x760) == DAT_0029ebb4) {
      iVar8 = *(int *)(param_1 + 0xa2c);
      iVar9 = 0;
      do {
        if (((*(byte *)(iVar8 + iVar9 * 0x50 + 0x16) & 2) != 0) &&
           (puVar11 = *(uint **)(iVar8 + iVar9 * 0x50 + 0x24), (*puVar11 & 0x14) != 0)) {
          iVar5 = iVar9 * 0x50 + 0x16;
          *(byte *)(iVar8 + iVar5) = *(byte *)(iVar8 + iVar5) & 0xfd;
          *(undefined2 *)(param_1 + 0x790) = 2;
          FUN_00375ed8(param_1,0x400000,0xff,0,0xc);
          uVar6 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(iVar7 + 8));
          uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
          FUN_00353020(uVar2,uVar1,uVar6,DAT_0029ebb8,param_1 + 0x1a4,DAT_0029ebbc,2);
          *(undefined2 *)(param_1 + 0x77a) = 0;
          *(undefined4 *)(param_1 + 0x760) = DAT_0029ebc0;
          *(undefined4 *)(param_1 + 0x7b4) = uVar1;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
          *(undefined2 *)(param_1 + 0x7aa) = 0x4b;
          psVar4 = (short *)(*(int *)(param_1 + 0xa2c) + iVar9 * 0x50 + 0xe);
          local_48 = VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
          local_44 = VectorSignedToFloat((int)psVar4[1],(byte)(in_fpscr >> 0x15) & 3);
          local_40 = VectorSignedToFloat((int)psVar4[2],(byte)(in_fpscr >> 0x15) & 3);
          FUN_003741e4(param_2,*puVar11,0,&local_48,0);
          FUN_00375bcc(param_1,DAT_0029ebc4);
          *(undefined2 *)(param_1 + 0x75c) = 10;
          return;
        }
        iVar9 = (int)(short)((short)iVar9 + 1);
      } while (iVar9 < 0x13);
    }
    iVar9 = *(int *)(param_1 + 0xa2c);
    if ((*(byte *)(iVar9 + 0x16) & 2) == 0) {
      if (*(short *)(param_1 + 0x75c) == 0) {
        iVar7 = 1;
        do {
          if ((*(byte *)(iVar9 + iVar7 * 0x50 + 0x16) & 2) != 0) {
            FUN_00375bcc(param_1,DAT_0029ebb0);
            *(undefined2 *)(param_1 + 0x75c) = 5;
            puVar11 = *(uint **)(*(int *)(param_1 + 0xa2c) + iVar7 * 0x50 + 0x24);
            psVar4 = (short *)(*(int *)(param_1 + 0xa2c) + iVar7 * 0x50 + 0xe);
            local_48 = VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
            local_44 = VectorSignedToFloat((int)psVar4[1],(byte)(in_fpscr >> 0x15) & 3);
            local_40 = VectorSignedToFloat((int)psVar4[2],(byte)(in_fpscr >> 0x15) & 3);
            FUN_003741e4(param_2,*puVar11,2,&local_48,0);
            if ((*puVar11 & 5) == 0) {
              FUN_003661a8(param_2,&local_48,4);
            }
            iVar9 = FUN_003656fc(param_2,*puVar11);
            goto joined_r0x0029ee58;
          }
          iVar7 = (int)(short)((short)iVar7 + 1);
        } while (iVar7 < 0x13);
      }
    }
    else {
      *(byte *)(iVar9 + 0x16) = *(byte *)(iVar9 + 0x16) & 0xfd;
      puVar10 = *(undefined4 **)(*(int *)(param_1 + 0xa2c) + 0x24);
      iVar9 = FUN_003656fc(param_2,*puVar10);
      iVar5 = *(int *)(param_1 + 0x760);
      iVar8 = DAT_0029ee84;
      if (iVar5 != DAT_0029ee84) {
        iVar8 = DAT_0029ee88;
      }
      if ((iVar5 != DAT_0029ee84 && iVar5 != iVar8) || (iVar9 == 0)) {
        if (*(short *)(param_1 + 0x75c) == 0) {
          iVar7 = *(int *)(param_1 + 0xa2c);
          local_48 = VectorSignedToFloat((int)*(short *)(iVar7 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
          local_44 = VectorSignedToFloat((int)*(short *)(iVar7 + 0x10),(byte)(in_fpscr >> 0x15) & 3)
          ;
          local_40 = VectorSignedToFloat((int)*(short *)(iVar7 + 0x12),(byte)(in_fpscr >> 0x15) & 3)
          ;
          FUN_003741e4(param_2,*puVar10,1,&local_48,0);
          FUN_00375bcc(param_1,DAT_0029ebb0);
          *(undefined2 *)(param_1 + 0x75c) = 5;
joined_r0x0029ee58:
          if (iVar9 != 0) {
            FUN_0032d674(param_2);
          }
        }
      }
      else {
        FUN_00375bcc(param_1,DAT_0029ee8c);
        iVar8 = DAT_0029ee90;
        if (*(int *)(param_1 + 0x760) != DAT_0029ee90) {
          uVar3 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(iVar7 + 0x20));
          uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
          FUN_00353020(uVar2,uVar1,uVar3,uVar6,param_1 + 0x1a4,DAT_0029ee94,2);
          *(int *)(param_1 + 0x760) = iVar8;
        }
        *(undefined2 *)(param_1 + 0x7aa) = 0x96;
        *(undefined2 *)(param_1 + 0x790) = 5;
        FUN_00375ed8(param_1,0x400000,0xff,0,0xc);
        *(short *)(param_1 + 0x764) = *(short *)(param_1 + 0x764) - (short)iVar9;
        iVar7 = *(int *)(param_1 + 0xa2c);
        local_48 = VectorSignedToFloat((int)*(short *)(iVar7 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
        local_44 = VectorSignedToFloat((int)*(short *)(iVar7 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
        local_40 = VectorSignedToFloat((int)*(short *)(iVar7 + 0x12),(byte)(in_fpscr >> 0x15) & 3);
        FUN_003741e4(param_2,*puVar10,0,&local_48,0);
        *(undefined2 *)(param_1 + 0x75c) = 5;
        FUN_0032d674(param_2);
      }
    }
  }
  return;
}
