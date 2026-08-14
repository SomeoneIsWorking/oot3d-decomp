// OoT3D decomp @ 0036442c  name=FUN_0036442c  size=260

int * FUN_0036442c(float param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;

  piVar5 = (int *)(param_2 + 0x2924);
  iVar3 = 0x14;
  do {
    if ((char)piVar5[0xd] == '\0') {
      iVar4 = 0;
      if (*piVar5 != 0) {
        iVar4 = *(int *)(param_2 + 0x86c);
      }
      if (*piVar5 != 0 && iVar4 != 0) {
        *(undefined1 *)(piVar5 + 0xd) = 3;
        fVar1 = fRam00364530;
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
        iVar6 = 0;
        piVar5[10] = *param_5;
        piVar5[0xb] = iVar3;
        piVar5[0xc] = iVar4;
        *(undefined2 *)(piVar5 + 0xe) = 0;
        piVar5[1] = (int)(param_1 * fVar1);
        do {
          func_0x0036932c(*piVar5,iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 5);
        func_0x0037266c(*piVar5,4);
        *(undefined2 *)((int)piVar5 + 0x36) = 0xff;
        *(undefined1 *)((int)piVar5 + 0x43) = 0;
        *(undefined1 *)(piVar5 + 0xf) = 0;
        *(undefined1 *)((int)piVar5 + 0x3d) = 0;
        *(undefined1 *)((int)piVar5 + 0x3e) = 0;
        *(undefined1 *)((int)piVar5 + 0x42) = 0;
        iVar3 = *(int *)(*piVar5 + 0xc);
        func_0x00372d94(iVar3,*(undefined4 *)(param_2 + 0x86c));
        uVar2 = uRam00364534;
        *(undefined1 *)(iVar3 + 0x10) = 1;
        *(undefined4 *)(iVar3 + 0xc) = uVar2;
        return piVar5;
      }
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 0x13;
    if (0x6d < iVar3) {
      return (int *)0x0;
    }
  } while( true );
}
