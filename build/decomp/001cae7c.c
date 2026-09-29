// OoT3D decomp @ 001cae7c  name=FUN_001cae7c  size=596

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001cae7c(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  uVar4 = DAT_001cb1f4;
  uVar3 = DAT_001cb1f0;
  uVar2 = DAT_001cb1ec;
  iVar8 = *(int *)(DAT_001cb1e8 + param_2);
  if (*(short *)(param_1 + 0xc0e) < 2) {
    bVar1 = *(byte *)(param_1 + 0xc84);
    if ((bVar1 & 4) == 0) {
      if (((bVar1 & 2) != 0) &&
         (*(byte *)(param_1 + 0xc84) = bVar1 & 0xfd, *(int *)(param_1 + 0xc78) == iVar8)) {
        FUN_00374bb8(uVar3,uVar3,param_2,param_1,(int)*(short *)(param_1 + 0x92));
        *(undefined2 *)(param_1 + 0xc0e) = 2;
        FUN_0036e980(param_2,param_1,0x18);
        FUN_00367c7c(param_2,DAT_001cb1f8,param_1);
        *(undefined4 *)(param_1 + 0xbfc) = 0x2d;
        *(undefined4 *)(param_1 + 0x6c) = uVar2;
        FUN_00375bcc(param_1,DAT_001cb1fc);
        return;
      }
    }
    else {
      *(byte *)(param_1 + 0xc84) = bVar1 & 0xf9;
      *(undefined2 *)(param_1 + 0xc0e) = 1;
      *(undefined4 *)(param_1 + 0x220) = uVar4;
    }
  }
  uVar4 = DAT_001cb204;
  uVar3 = DAT_001cb200;
  if ((int)*(float *)(param_1 + 0x21c) < 9) {
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
  }
  else {
    iVar8 = FUN_003736fc(DAT_001cb208,DAT_001cb204,param_1 + 0x1e0);
    uVar5 = DAT_001cb20c;
    if (iVar8 == 0) {
      iVar8 = FUN_003736fc(DAT_001cb218,uVar4,param_1 + 0x1e0);
      if (iVar8 == 0) {
        iVar8 = FUN_003736fc(DAT_001cb21c,uVar4,param_1 + 0x1e0);
        if (iVar8 != 0) {
          *(undefined2 *)(param_1 + 0xc0c) = 0xffff;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x6c) = uVar2;
      }
    }
    else {
      FUN_0036f00c(uVar3,DAT_001cb20c,param_2,param_1,param_1 + 0xdd8,2,0,0,0);
      FUN_0036f00c(uVar3,uVar5,param_2,param_1,param_1 + 0xdcc,2,0,0,0);
      uVar2 = DAT_001cb214;
      *(undefined4 *)(param_1 + 0x6c) = DAT_001cb210;
      *(undefined2 *)(param_1 + 0xc0c) = 1;
      FUN_00375bcc(param_1,uVar2);
    }
  }
  iVar6 = FUN_003731e0(param_1 + 0x1e0);
  iVar8 = 0;
  iVar7 = 0;
  if (iVar6 != 0) {
    iVar7 = (int)*(short *)(param_1 + 0xc0e);
    iVar8 = iVar7 + -2;
  }
  if (iVar8 < 0 == (iVar6 != 0 && SBORROW4(iVar7,2))) {
    return;
  }
  iVar8 = FUN_0036f18c(param_1,DAT_001cb220);
  if (iVar8 == 0) {
    FUN_0035ad18(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (*(short *)(param_1 + 0xc0e) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  FUN_00374a58(DAT_0036501c,param_1 + 0x1e0,2);
  iVar8 = DAT_00365020;
  *(undefined4 *)(param_1 + 0xbfc) = 0;
  *(undefined2 *)(iVar8 + param_1) = 1;
  *(undefined4 *)(param_1 + 0x6c) = DAT_00365024;
  *(undefined4 *)(param_1 + 0xbe8) = 4;
  FUN_00375bcc(param_1,DAT_00365028);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
  *(undefined4 *)(param_1 + 0xbf0) = DAT_0036502c;
  return;
}
