// OoT3D decomp @ 003827cc  name=FUN_003827cc  size=480

void FUN_003827cc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  short sVar4;
  int iVar5;
  undefined1 auStack_70 [48];
  undefined1 auStack_40 [48];

  FUN_00372224(auStack_40,param_1 + 0x148);
  if (*(int *)(param_1 + 0x3e0) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x3e0) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x3e0),auStack_40);
    FUN_00372170(*(undefined4 *)(param_1 + 0x3e0),0);
  }
  if (((*DAT_003829ac & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_003829ac), puVar3 = DAT_003829b8, uVar2 = DAT_003829b4,
     uVar1 = DAT_003829b0, iVar5 != 0)) {
    *DAT_003829b8 = DAT_003829b0;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
    puVar3[3] = uVar2;
    puVar3[4] = uVar2;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    puVar3[7] = uVar2;
    puVar3[8] = uVar2;
    puVar3[9] = uVar2;
    puVar3[10] = uVar1;
    puVar3[0xb] = uVar2;
  }
  FUN_00372224(auStack_70,DAT_003829b8);
  sVar4 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(DAT_003829bc + param_2) * 4 + 0xa54));
  iVar5 = 3;
  if (-1 < (short)((sVar4 - *(short *)(param_1 + 0xbe)) + -0x2e6c)) {
    do {
      FUN_0031de1c(param_2,param_1,(int)(short)iVar5,auStack_70,0,4);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    iVar5 = 0;
    do {
      FUN_0031de1c(param_2,param_1,(int)(short)iVar5,auStack_70,1,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    return;
  }
  do {
    FUN_0031de1c(param_2,param_1,(int)(short)iVar5,auStack_70,1,4);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  iVar5 = 0;
  do {
    FUN_0031de1c(param_2,param_1,(int)(short)iVar5,auStack_70,0,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  return;
}
