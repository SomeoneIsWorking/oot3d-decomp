// OoT3D decomp @ 0026a124  name=FUN_0026a124  size=452

void FUN_0026a124(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;

  if (0 < *(short *)(param_1 + 0x280)) {
    *(short *)(param_1 + 0x280) = *(short *)(param_1 + 0x280) + -1;
  }
  if (*(short *)(param_1 + 0x1c) == 0) {
    if ((*(int *)(param_1 + 0x128) != 0) && (*(int *)(*(int *)(param_1 + 0x128) + 0x13c) == 0)) {
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x298) = 0;
    *(short *)(param_1 + 0x294) = *(short *)(param_1 + 0x294) + 0x640;
    fVar6 = (float)FUN_002cfca0();
    uVar1 = DAT_0026a2f0;
    *(float *)(param_1 + 0xc4) = DAT_0026a2ec + fVar6 * DAT_0026a2e8;
    FUN_0037322c(uVar1,param_1);
    FUN_00375bcc(param_1,DAT_0026a2f4);
  }
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  uVar1 = DAT_0026a2fc;
  puVar2 = DAT_0026a2f8;
  if (*(short *)(param_1 + 0x1c) == 0) {
    if ((*(byte *)(param_1 + 0x1b9) & 2) != 0) {
      if (((DAT_0026a2f8[1] & 1) == 0) &&
         (iVar5 = FUN_003679b4(DAT_0026a2f8 + 1), puVar3 = DAT_0026a300, iVar5 != 0)) {
        *DAT_0026a300 = uVar1;
        puVar3[1] = uVar1;
        puVar3[2] = uVar1;
      }
      if (((*puVar2 & 1) == 0) &&
         (iVar5 = FUN_003679b4(DAT_0026a2f8), puVar3 = DAT_0026a308, uVar4 = DAT_0026a304,
         iVar5 != 0)) {
        *DAT_0026a308 = uVar1;
        puVar3[1] = uVar4;
        puVar3[2] = uVar1;
      }
      FUN_0036f95c(param_2,param_1 + 0x28,DAT_0026a308 + -3,DAT_0026a308,0xf,8);
      FUN_00374428(param_1);
      return;
    }
    if (*(short *)(param_1 + 0x282) < 3) {
      *(byte *)(param_1 + 0x1b9) = *(byte *)(param_1 + 0x1b9) & 0xfd;
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
      return;
    }
  }
  return;
}
