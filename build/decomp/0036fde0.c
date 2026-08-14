// OoT3D decomp @ 0036fde0  name=FUN_0036fde0  size=264

void FUN_0036fde0(float param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  
  piVar4 = (int *)(param_2 + 0x2924);
  iVar2 = 0;
  do {
    if ((char)piVar4[0xd] == '\0') {
      iVar3 = 0;
      if (*piVar4 != 0) {
        iVar3 = *(int *)(param_2 + 0x864);
      }
      if (*piVar4 != 0 && iVar3 != 0) {
        *(undefined1 *)(piVar4 + 0xd) = 5;
        fVar5 = fRam0036fee8;
        iVar2 = param_3[1];
        iVar3 = param_3[2];
        piVar4[4] = *param_3;
        piVar4[5] = iVar2;
        piVar4[6] = iVar3;
        iVar2 = param_4[1];
        iVar3 = param_4[2];
        piVar4[7] = *param_4;
        piVar4[8] = iVar2;
        piVar4[9] = iVar3;
        iVar2 = param_5[1];
        iVar3 = param_5[2];
        piVar4[10] = *param_5;
        piVar4[0xb] = iVar2;
        piVar4[0xc] = iVar3;
        piVar4[1] = (int)(param_1 * fVar5);
        fVar5 = (float)func_0x00371e50(uRam0036feec);
        iVar2 = 0;
        *(char *)((int)piVar4 + 0x35) = (char)(int)fVar5;
        do {
          func_0x0036932c(*piVar4,iVar2);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 5);
        func_0x0037266c(*piVar4,1);
        *(undefined2 *)((int)piVar4 + 0x36) = 0xff;
        *(undefined1 *)((int)piVar4 + 0x3e) = 0xff;
        *(undefined1 *)((int)piVar4 + 0x3d) = 0xff;
        *(undefined1 *)(piVar4 + 0xf) = 0xff;
        *(undefined1 *)((int)piVar4 + 0x43) = 0;
        iVar2 = *(int *)(*piVar4 + 0xc);
        func_0x00372d94(iVar2,*(undefined4 *)(param_2 + 0x864));
        uVar1 = uRam0036fef0;
        *(undefined1 *)(iVar2 + 0x10) = 1;
        *(undefined4 *)(iVar2 + 0xc) = uVar1;
        return;
      }
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 0x13;
    if (0x13 < iVar2) {
      return;
    }
  } while( true );
}

