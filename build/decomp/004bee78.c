// OoT3D decomp @ 004bee78  name=FUN_004bee78  size=732

void FUN_004bee78(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  uint local_30;
  float local_2c;
  
  iVar5 = FUN_0036b4ec(param_1 + 0x254);
  if (iVar5 != 0) {
    FUN_00359aa0(param_1 + 0x254,param_2,0x34);
  }
  FUN_0034b17c(param_1);
  if ((((*(uint *)(DAT_004bf154 + *(int *)(param_2 + 0x20ac)) & 0x80 |
        (*(uint *)(*(int *)(param_2 + 0x20ac) + 4) & 0x100) >> 8) == 0) &&
      (iVar5 = FUN_002c3d18(param_2,param_1,DAT_004bf158,1), iVar5 == 0)) &&
     (iVar6 = FUN_00358bf4(param_2,param_1,*(undefined4 *)(DAT_004bf15c + param_1)),
     iVar5 = DAT_004bf164, uVar1 = DAT_004bf160, iVar6 == 0)) {
    if (*(char *)(param_1 + 0x1749) != '\x01') {
      *(undefined *)(param_1 + 0x1749) = 0;
      *(undefined4 *)(iVar5 + 0xcc) = uVar1;
      *(undefined *)(iVar5 + 0xd4) = 0;
    }
    fVar2 = DAT_004bf168;
    if (*(char *)(param_1 + 0x1a7) == '\x01') {
      local_2c = DAT_004bf168;
      local_30 = (uint)*(ushort *)(param_1 + 0xbe);
      if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
        FUN_0033f7ac(param_1,*(undefined4 *)
                              (DAT_004bf16c + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x1b0),param_2)
        ;
        FUN_0034bd3c(param_1);
      }
    }
    else {
      uVar8 = FUN_002bbbcc(DAT_004bf168,param_2,param_1,&local_2c,&local_30);
      uVar7 = (uint)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 == 0) {
        local_30 = (uint)*(ushort *)(param_1 + 0x36);
        iVar5 = *(int *)(param_1 + 0x16f8);
        if (iVar5 != 0) {
          uVar7 = (uint)*(byte *)(param_2 + 0x2147);
        }
        if ((iVar5 != 0 && uVar7 != 0) && ((*(uint *)(param_1 + 0x1714) & 0x40) == 0)) {
          local_30 = FUN_003758b0(*(float *)(iVar5 + 0x44) - *(float *)(param_1 + 0x30),
                                  *(float *)(iVar5 + 0x3c) - *(float *)(param_1 + 0x28));
        }
      }
      else {
        iVar5 = FUN_00368fec(*(undefined4 *)
                              (param_2 + *(short *)(DAT_004bf170 + param_2) * 4 + 0xa54));
        local_30 = iVar5 + (local_30 & 0xffff);
      }
      uVar1 = DAT_004bf174;
      if (local_2c != fVar2) {
        if ((0xc000 < (int)(short)(*(short *)(param_1 + 0xbe) - (short)local_30) + 0x6000U) &&
           (iVar5 = FUN_003705a0(fVar2,DAT_004bf174,param_1 + 0x221c), iVar5 == 0)) {
          return;
        }
        iVar5 = FUN_00349574(param_1);
        uVar3 = DAT_004bf178;
        if ((iVar5 == 0) && ((*(uint *)(param_1 + 0x1710) & DAT_004bf17c) == 0)) {
          uVar4 = (short)local_30;
          FUN_0036055c(param_2,param_1,DAT_004bf180,1);
          *(undefined2 *)(DAT_004bf184 + param_1) = uVar4;
          *(undefined2 *)(param_1 + 0xbe) = uVar4;
          FUN_00360190(uVar1,fVar2,fVar2,uVar3,param_1 + 0x254,param_2,0x3b,0);
        }
        else {
          FUN_0036055c(param_2,param_1,DAT_004bf188,1);
          FUN_00360190(uVar1,fVar2,fVar2,uVar3,param_1 + 0x254,param_2,0x3b,0);
        }
      }
    }
    FUN_0034ad70(local_2c,param_1,param_1 + 0x221c,(int)(short)local_30);
  }
  return;
}

