// OoT3D decomp @ 0026adcc  name=FUN_0026adcc  size=408

void FUN_0026adcc(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  int iVar5;
  float fVar6;

  if (((*(short *)(param_1 + 0x42c) == 0) ||
      (sVar1 = *(short *)(param_1 + 0x42c) + -1, *(short *)(param_1 + 0x42c) = sVar1, sVar1 == 0))
     && ((*(byte *)(param_1 + 0x378) & 2) != 0)) {
    *(byte *)(param_1 + 0x378) = *(byte *)(param_1 + 0x378) & 0xfd;
    *(undefined2 *)(param_1 + 0x42c) = 0x1e;
  }
  (**(code **)(param_1 + 0x228))(param_1,param_2);
  uVar3 = DAT_0026af6c;
  iVar2 = DAT_0026af68;
  if (*(int *)(param_1 + 0x228) != DAT_0026af64) {
    if (*(int *)(param_1 + 0x228) == DAT_0026af68) {
      FUN_00376864(param_1);
      FUN_00376340(uVar3,DAT_0026af70,uVar3,param_2,param_1,5);
      iVar5 = extraout_r1;
    }
    else {
      FUN_00376340(DAT_0026af74,DAT_0026af74,DAT_0026af74,param_2,param_1,4);
      iVar5 = extraout_r1_00;
      if (*(int *)(param_1 + 0x364) == 0) {
        iVar5 = *(int *)(param_1 + 0x7c);
        *(int *)(param_1 + 0x364) = iVar5;
      }
    }
    iVar4 = *(int *)(param_1 + 0x228);
    if (iVar4 != iVar2) {
      iVar5 = DAT_0026af78;
    }
    if (iVar4 != iVar2 && iVar4 != iVar5) {
      iVar5 = param_2 + 0x5c78;
      iVar2 = DAT_0026af7c;
      if (iVar4 != DAT_0026af7c) {
        iVar2 = DAT_0026af80;
      }
      if (iVar4 != DAT_0026af7c && iVar4 != iVar2) {
        if (*(short *)(param_1 + 0x42c) == 0) {
          FUN_003761f0(param_2,iVar5,param_1 + 0x368);
        }
        FUN_00376168(param_2,iVar5,param_1 + 0x3c0);
      }
      FUN_003762a4(param_2,iVar5,param_1 + 0x368);
      FUN_0037322c(*(float *)(param_1 + 0x54) * DAT_0026af84,param_1);
      fVar6 = *(float *)(param_1 + 0xc) + DAT_0026af88;
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 8);
      if (*(float *)(param_1 + 0x40) <= fVar6) {
        fVar6 = *(float *)(param_1 + 0x40);
      }
      *(float *)(param_1 + 0x40) = fVar6;
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x10);
    }
  }
  return;
}
