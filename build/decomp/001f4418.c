// OoT3D decomp @ 001f4418  name=FUN_001f4418  size=1032

void FUN_001f4418(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int extraout_r1;
  int iVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;

  iVar5 = DAT_001f47f4;
  uVar4 = DAT_001f47f0;
  uVar3 = DAT_001f47ec;
  uVar1 = (*(byte *)(param_1 + 0x4d1) & 2) >> 1;
  uVar2 = (*(byte *)(param_1 + 0x529) & 2) >> 1;
  if ((uVar1 == 0) || ((**(uint **)(param_1 + 0x4fc) & 0x10) == 0)) {
    if ((uVar2 == 0) || (puVar8 = *(uint **)(param_1 + 0x554), (*puVar8 & 0x10) == 0)) {
      if (((((*(byte *)(param_1 + 0x4d0) & 2) != 0) || ((*(byte *)(param_1 + 0x528) & 2) != 0)) ||
          ((uVar1 != 0 && ((**(uint **)(param_1 + 0x4fc) & 0x100) != 0)))) ||
         ((uVar2 != 0 && ((**(uint **)(param_1 + 0x554) & 0x100) != 0)))) {
        if ((*(int *)(param_1 + 0x4b4) == DAT_001f4800 && (*(byte *)(param_1 + 0x4d0) & 4) == 0) &&
           ((*(byte *)(param_1 + 0x528) & 4) == 0)) {
          FUN_00374bb8(DAT_001f4804,DAT_001f47f0,param_2,param_1,(int)*(short *)(param_1 + 0x92));
        }
        else if (*(int *)(param_1 + 0x4b4) != DAT_001f4800) {
          FUN_00370350(DAT_001f47ec,param_1 + 0x1bc,2);
          uVar3 = DAT_001f4808;
          *(undefined2 *)(param_1 + 0x4b8) = 0xf;
          *(undefined2 *)(param_1 + 0x4bc) = 0x2d;
          *(undefined4 *)(param_1 + 0x4b4) = uVar3;
        }
      }
      if (uVar1 == 0) {
        if (uVar2 == 0) goto LAB_001f469c;
        puVar9 = *(undefined4 **)(param_1 + 0x554);
        local_38 = VectorSignedToFloat((int)*(short *)(param_1 + 0x53e),(byte)(in_fpscr >> 0x15) & 3
                                      );
        local_34 = VectorSignedToFloat((int)*(short *)(param_1 + 0x540),(byte)(in_fpscr >> 0x15) & 3
                                      );
        local_30 = VectorSignedToFloat((int)*(short *)(param_1 + 0x542),(byte)(in_fpscr >> 0x15) & 3
                                      );
      }
      else {
        puVar9 = *(undefined4 **)(param_1 + 0x4fc);
        local_38 = VectorSignedToFloat((int)*(short *)(param_1 + 0x4e6),(byte)(in_fpscr >> 0x15) & 3
                                      );
        local_34 = VectorSignedToFloat((int)*(short *)(param_1 + 0x4e8),(byte)(in_fpscr >> 0x15) & 3
                                      );
        local_30 = VectorSignedToFloat((int)*(short *)(param_1 + 0x4ea),(byte)(in_fpscr >> 0x15) & 3
                                      );
      }
      FUN_003741e4(param_2,*puVar9,1,&local_38,0);
      goto LAB_001f469c;
    }
    if (uVar1 != 0) goto LAB_001f4498;
    local_38 = VectorSignedToFloat((int)*(short *)(param_1 + 0x53e),(byte)(in_fpscr >> 0x15) & 3);
    local_34 = VectorSignedToFloat((int)*(short *)(param_1 + 0x540),(byte)(in_fpscr >> 0x15) & 3);
    local_30 = VectorSignedToFloat((int)*(short *)(param_1 + 0x542),(byte)(in_fpscr >> 0x15) & 3);
  }
  else {
LAB_001f4498:
    puVar8 = *(uint **)(param_1 + 0x4fc);
    local_38 = VectorSignedToFloat((int)*(short *)(param_1 + 0x4e6),(byte)(in_fpscr >> 0x15) & 3);
    local_34 = VectorSignedToFloat((int)*(short *)(param_1 + 0x4e8),(byte)(in_fpscr >> 0x15) & 3);
    local_30 = VectorSignedToFloat((int)*(short *)(param_1 + 0x4ea),(byte)(in_fpscr >> 0x15) & 3);
  }
  FUN_003741e4(param_2,*puVar8,0,&local_38,0);
  FUN_00374a58(uVar3,param_1 + 0x1bc,3);
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x4ba),(byte)(in_fpscr >> 0x15) & 3)
  ;
  *(short *)(param_1 + 0x4ba) = (short)(int)(fVar13 - DAT_001f47f8);
  FUN_00375ed8(param_1,0,0xff,0,0x50);
  FUN_00375bcc(param_1,DAT_001f47fc);
  *(int *)(param_1 + 0x4b4) = iVar5;
LAB_001f469c:
  *(byte *)(param_1 + 0x4d0) = *(byte *)(param_1 + 0x4d0) & 0xf9;
  *(byte *)(param_1 + 0x4d1) = *(byte *)(param_1 + 0x4d1) & 0xfd;
  *(byte *)(param_1 + 0x528) = *(byte *)(param_1 + 0x528) & 0xf9;
  *(byte *)(param_1 + 0x529) = *(byte *)(param_1 + 0x529) & 0xfd;
  if (*(short *)(param_1 + 0x4bc) != 0) {
    *(short *)(param_1 + 0x4bc) = *(short *)(param_1 + 0x4bc) + -1;
  }
  (**(code **)(param_1 + 0x4b4))(param_1,param_2);
  iVar6 = DAT_001f480c;
  iVar10 = *(int *)(param_1 + 0x4b4);
  iVar11 = extraout_r1;
  if (iVar10 != DAT_001f480c) {
    iVar11 = DAT_001f4810;
  }
  if (iVar10 != DAT_001f480c && iVar10 != iVar11) {
    iVar11 = param_2 + 0x5c78;
    iVar12 = param_1 + 0x518;
    if ((iVar10 != iVar5) && (*(short *)(param_1 + 0x4bc) == 0)) {
      FUN_003761f0(param_2,iVar11,param_1 + 0x4c0);
      FUN_003761f0(param_2,iVar11,iVar12);
      if (*(int *)(param_1 + 0x4b4) != DAT_001f4800) {
        FUN_00376168(param_2,iVar11,param_1 + 0x4c0);
        FUN_00376168(param_2,iVar11,iVar12);
      }
    }
    FUN_003762a4(param_2,iVar11,param_1 + 0x4c0);
    FUN_003762a4(param_2,iVar11,iVar12);
  }
  piVar7 = DAT_001f4818;
  uVar3 = DAT_001f4814;
  if (*(int *)(param_1 + 0x4b4) == iVar5 || *(int *)(param_1 + 0x4b4) == iVar6) {
    *(undefined4 *)(*(int *)(param_1 + 0x240) + 0xc) = DAT_001f4814;
    if (*piVar7 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x240) + 8) = uVar3;
      FUN_003586ec();
    }
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x240) + 0xc) = uVar4;
  }
  FUN_00373bec(*(undefined4 *)(param_1 + 0x240));
  return;
}
