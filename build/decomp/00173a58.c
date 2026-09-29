// OoT3D decomp @ 00173a58  name=FUN_00173a58  size=440

void FUN_00173a58(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_40;
  float local_3c;
  float local_38;

  uVar2 = DAT_00173d14;
  uVar1 = DAT_00173cec;
  iVar3 = DAT_00173ce4;
  if ((*(ushort *)(param_1 + 0x234) & 1) == 0) {
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * DAT_00173d10;
    FUN_003705a0(uVar2,param_1 + 0xedc);
    if ((*(int *)(param_1 + 0x6c) < 0x40000000) && (*(short *)(param_1 + 0x234) != 0)) {
      *(short *)(param_1 + 0x234) = *(short *)(param_1 + 0x234) + -1;
    }
  }
  else {
    fVar6 = *(float *)(param_1 + 0x6c) * DAT_00173ce0;
    *(float *)(param_1 + 0x6c) = fVar6;
    if (iVar3 < (int)fVar6) {
      fVar6 = DAT_00173ce8;
    }
    *(float *)(param_1 + 0x6c) = fVar6;
    iVar3 = FUN_003705a0(uVar1,param_1 + 0xedc);
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 0x232) = 1;
      fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbc));
      fVar6 = DAT_00173cf0;
      fVar4 = fVar4 * DAT_00173cf0;
      fVar5 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
      local_40 = *(float *)(param_1 + 0x28) + fVar4 * fVar5;
      fVar5 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbc));
      local_3c = (*(float *)(param_1 + 0x2c) + fVar5 * fVar6) - DAT_00173cf4;
      fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
      local_38 = *(float *)(param_1 + 0x30) + fVar4 * fVar6;
      FUN_0036df4c(param_1 + 0x12d4,&local_40);
      *(undefined2 *)(param_1 + 0x12f6) = 1;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x240));
  *(float *)(param_1 + 0x28) =
       *(float *)(*(int *)(param_1 + 0x128) + 0xee0) - *(float *)(param_1 + 0xedc) * fVar6;
  fVar6 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x240));
  iVar3 = *(int *)(param_1 + 0x128);
  *(float *)(param_1 + 0x30) = *(float *)(iVar3 + 0xee8) - *(float *)(param_1 + 0xedc) * fVar6;
  *(float *)(param_1 + 0x2c) =
       *(float *)(iVar3 + 0xee4) + *(float *)(param_1 + 0xedc) * DAT_00173d18;
  if (*(short *)(param_1 + 0x234) == 0) {
    *(undefined1 *)(iVar3 + 0x231) = 1;
    FUN_003672b8(param_1);
  }
  FUN_00373264(param_1,DAT_00173d1c);
  return;
}
