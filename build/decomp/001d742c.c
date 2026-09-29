// OoT3D decomp @ 001d742c  name=FUN_001d742c  size=600

void FUN_001d742c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  FUN_0037632c(param_1,param_1 + 0x1a4,param_3,param_4,param_4);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  FUN_00376864(param_1);
  FUN_00376340(DAT_001d7688,DAT_001d768c,DAT_001d7688,param_2,param_1,5);
  (**(code **)(param_1 + 0x8b4))(param_1);
  (**(code **)(param_1 + 0x8b0))(param_1,param_2);
  uVar2 = DAT_001d7690;
  iVar4 = param_1 + 0x898;
  iVar5 = param_1 + 0x89a;
  if ((*(ushort *)(param_1 + 0x8a8) & 1) == 0) {
    if (((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x4300U < 0x8601)
       && (*(int *)(param_1 + 0x98) < DAT_001d7698)) {
      FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                   *(undefined4 *)(param_1 + 0x44),param_2,param_1,iVar4,param_1 + 0x89e,0x4300);
    }
    else {
      FUN_00375a18(iVar4,0,6,DAT_001d7690,100);
      FUN_00375a18(iVar5,0,6,uVar2,100);
    }
  }
  else {
    iVar3 = (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe));
    if (iVar3 + 0x4000U < 0x8001) {
      FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),6,4000,100);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
      FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                   *(undefined4 *)(param_1 + 0x44),param_2,param_1,iVar4,param_1 + 0x89e,0x4300);
    }
    else {
      if (iVar3 < 0) {
        FUN_00375a18(iVar5,DAT_001d7694,6,DAT_001d7690,0x100);
      }
      else {
        FUN_00375a18(iVar5,0x2000,6,DAT_001d7690,0x100);
      }
      FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),0xc,1000,100);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    }
    *(ushort *)(param_1 + 0x8a8) = *(ushort *)(param_1 + 0x8a8) & 0xfffe;
  }
  *(undefined2 *)(param_1 + 0x8a2) = 0;
  *(undefined2 *)(param_1 + 0x8a0) = 0;
  *(undefined2 *)(param_1 + 0x89e) = 0;
  if ((*(short *)(param_1 + 0x8a6) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x8a6) + -1, *(short *)(param_1 + 0x8a6) = sVar1, sVar1 != 0)) {
    *(short *)(param_1 + 0x8a4) = *(short *)(param_1 + 0x8a6);
    if (2 < *(short *)(param_1 + 0x8a6)) {
      *(undefined2 *)(param_1 + 0x8a4) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x3c);
}
