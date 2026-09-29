// OoT3D decomp @ 0026fd24  name=FUN_0026fd24  size=572

void FUN_0026fd24(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  float fVar6;

  uVar3 = DAT_002700fc;
  uVar2 = DAT_002700f0;
  if (*(short *)(param_1 + 0x204) < 1) {
    FUN_003705a0(*(undefined4 *)(param_1 + 8),DAT_002700fc,param_1 + 0x28);
    FUN_003705a0(*(undefined4 *)(param_1 + 0x10),uVar3,param_1 + 0x30);
    uVar2 = DAT_00270100;
    FUN_00370378(param_1 + 0xbc,(int)*(short *)(param_1 + 0x14),DAT_00270100);
    FUN_00370378(param_1 + 0xc0,(int)*(short *)(param_1 + 0x18),uVar2);
  }
  else {
    *(short *)(param_1 + 0x204) = *(short *)(param_1 + 0x204) + -1;
    uVar4 = DAT_002700f8;
    uVar3 = DAT_002700f4;
    *(short *)(param_1 + 0x206) = *(short *)(param_1 + 0x206) + 5000;
    *(short *)(param_1 + 0x208) = *(short *)(param_1 + 0x208) + 0xe10;
    FUN_003705a0(uVar4,uVar3,param_1 + 0x1fc);
    FUN_003705a0(uVar4,uVar2,param_1 + 0x200);
    fVar6 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x206) << 2));
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar6 * *(float *)(param_1 + 0x1fc);
    fVar6 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x206) * 7));
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar6 * *(float *)(param_1 + 0x1fc);
    fVar6 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x208) << 2));
    *(short *)(param_1 + 0xbc) =
         *(short *)(param_1 + 0x14) + (short)(int)(fVar6 * *(float *)(param_1 + 0x200));
    fVar6 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0x208) * 7));
    *(short *)(param_1 + 0xc0) =
         *(short *)(param_1 + 0x18) + (short)(int)(fVar6 * *(float *)(param_1 + 0x200));
  }
  bVar1 = *(byte *)(param_1 + 0x1b5);
  if (((bVar1 & 2) != 0) && ((DAT_00270104 & **(uint **)(param_1 + 0x1e0)) != 0)) {
    *(byte *)(param_1 + 0x1b5) = bVar1 & 0xfd;
    uVar2 = DAT_00270108;
    sVar5 = *(short *)(param_1 + 0x20a) + 1;
    *(short *)(param_1 + 0x20a) = sVar5;
    uVar3 = DAT_0027010c;
    if (sVar5 < 2) {
      *(undefined2 *)(param_1 + 0x204) = 0xf;
      *(undefined4 *)(param_1 + 0x1fc) = uVar2;
      *(undefined4 *)(param_1 + 0x200) = uVar3;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_003759d0(21000);
  }
  *(byte *)(param_1 + 0x1b5) = bVar1 & 0xfd;
  if (DAT_002701e0 <= *(int *)(param_1 + 0x98)) {
    return;
  }
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  return;
}
