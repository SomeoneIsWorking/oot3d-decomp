// OoT3D decomp @ 003e4064  name=FUN_003e4064  size=360

void FUN_003e4064(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float local_24 [2];
  uint local_1c;

  fVar1 = DAT_003e41d0;
  iVar4 = *(int *)(DAT_003e41cc + param_2);
  if (*(float *)(param_1 + 0x1a8) != DAT_003e41d0) {
    if (((*(short *)(param_2 + 0x104) == 0x53) && (*(int *)(DAT_003e41d4 + 4) != 0)) &&
       (*(int *)(DAT_003e41d4 + 0x10) == 0)) {
      *(float *)(param_1 + 0x1a8) = DAT_003e41d0;
      *(uint *)(iVar4 + 0x1714) = *(uint *)(iVar4 + 0x1714) & 0xffffffef;
      iVar2 = FUN_0037577c(param_2);
      if (iVar2 != 0) goto LAB_003e4164;
      FUN_00367c7c(param_2,DAT_003e41d8,0);
      *(undefined2 *)(param_1 + 0x1c) = 0x96;
      uVar3 = DAT_003e41dc;
    }
    else {
      if ((DAT_003e41d0 < *(float *)(param_1 + 0x1a8)) ||
         (((*(short *)(param_2 + 0x104) == 0x57 && (*(int *)(DAT_003e41d4 + 4) != 0)) &&
          (iVar2 = FUN_0036e864(param_2,0x23), iVar2 == 0)))) {
        *(float *)(param_1 + 0x1a8) = fVar1;
        *(uint *)(iVar4 + 0x1714) = *(uint *)(iVar4 + 0x1714) & 0xffffffef;
        goto LAB_003e4164;
      }
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + -0x8000;
      uVar3 = DAT_003e41e0;
    }
    *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  }
LAB_003e4164:
  FUN_0036c5d8(param_1,local_24,iVar4 + 0x28);
  if ((((int)ABS(local_24[0]) < DAT_003e41e4) && (local_1c < DAT_003e41e8)) &&
     (DAT_003e41ec < local_1c)) {
    *(uint *)(iVar4 + 0x1714) = *(uint *)(iVar4 + 0x1714) | 0x200;
  }
  return;
}
