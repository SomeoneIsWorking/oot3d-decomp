// OoT3D decomp @ 0036fef4  name=FUN_0036fef4  size=384

void FUN_0036fef4(float param_1,int param_2,int *param_3,int *param_4,int *param_5,
                 undefined2 param_6,undefined2 param_7)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;

  piVar5 = (int *)(param_2 + 0x2924);
  iVar3 = 0x14;
  do {
    if ((char)piVar5[0xd] == '\0') {
      iVar4 = 0;
      if (*piVar5 != 0) {
        iVar4 = *(int *)(param_2 + 0x868);
      }
      if (*piVar5 != 0 && iVar4 != 0) {
        *(undefined1 *)(piVar5 + 0xd) = 4;
        *(undefined1 *)((int)piVar5 + 0x35) = 0;
        iVar3 = param_3[1];
        iVar4 = param_3[2];
        piVar5[4] = *param_3;
        piVar5[5] = iVar3;
        piVar5[6] = iVar4;
        iVar3 = param_4[1];
        iVar4 = param_4[2];
        piVar5[7] = *param_4;
        piVar5[8] = iVar3;
        piVar5[9] = iVar4;
        iVar3 = param_5[1];
        iVar4 = param_5[2];
        piVar5[10] = *param_5;
        piVar5[0xb] = iVar3;
        piVar5[0xc] = iVar4;
        piVar5[4] = (int)((float)piVar5[4] - (float)piVar5[7]);
        piVar5[5] = (int)((float)piVar5[5] - (float)piVar5[8]);
        piVar5[6] = (int)((float)piVar5[6] - (float)piVar5[9]);
        piVar5[2] = DAT_00370074;
        iVar3 = FUN_00371e50(DAT_00370078);
        piVar5[3] = iVar3;
        fVar1 = DAT_0037007c;
        *(undefined2 *)(piVar5 + 0xe) = 0;
        piVar5[1] = (int)(param_1 * fVar1);
        *(undefined2 *)((int)piVar5 + 0x3a) = param_7;
        iVar3 = 0;
        do {
          FUN_0036932c(*piVar5,iVar3);
          iVar3 = iVar3 + 1;
        } while (iVar3 < 5);
        FUN_0037266c(*piVar5,0);
        *(undefined1 *)(piVar5 + 0xf) = 0xff;
        *(undefined2 *)((int)piVar5 + 0x36) = param_6;
        *(undefined1 *)((int)piVar5 + 0x3d) = 0;
        *(undefined1 *)((int)piVar5 + 0x3e) = 0;
        *(undefined1 *)((int)piVar5 + 0x42) = 0;
        *(undefined1 *)((int)piVar5 + 0x3f) = 0xff;
        *(undefined1 *)(piVar5 + 0x10) = 0;
        *(undefined1 *)((int)piVar5 + 0x41) = 0;
        *(undefined2 *)(piVar5 + 0x11) = 0;
        *(undefined2 *)((int)piVar5 + 0x46) = 0xcc0;
        *(undefined2 *)(piVar5 + 0x12) = 0xcc0;
        *(undefined1 *)((int)piVar5 + 0x43) = 10;
        iVar3 = *(int *)(*piVar5 + 0xc);
        FUN_00372d94(iVar3,*(undefined4 *)(param_2 + 0x868));
        uVar2 = DAT_00370080;
        *(undefined1 *)(iVar3 + 0x10) = 1;
        *(undefined4 *)(iVar3 + 0xc) = uVar2;
        return;
      }
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 0x13;
    if (0x6d < iVar3) {
      return;
    }
  } while( true );
}
