// OoT3D decomp @ 001bb110  name=FUN_001bb110  size=752

void FUN_001bb110(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  undefined4 local_20;

  if ((*(short *)(param_2 + 0x104) == 0x55) && (*(float *)(param_1 + 0x54) == DAT_001bb400)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20000000;
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xdfffffff;
  }
  FUN_00370734(param_1 + 0x1a4);
  iVar5 = FUN_003415a8(param_1,param_2);
  local_20 = param_4;
  if (iVar5 != 0) goto LAB_001bb30c;
  bVar7 = false;
  if ((*(int *)(param_1 + 0x94) < DAT_001bb404) && ((*(ushort *)(param_1 + 0x1c) & 0xe000) == 0)) {
    if (*(short *)(param_1 + 0x74a) == 0) {
      if ((*(char *)(param_1 + 0xb7) != '\0') &&
         (bVar7 = *(char *)(DAT_001bb408 + param_2) != '\0', bVar7)) {
        *(char *)(param_1 + 0xb8) = *(char *)(param_1 + 0xb7);
      }
LAB_001bb1d4:
      if (bVar7 || (*(byte *)(param_1 + 0x6b5) & 2) != 0) {
        *(byte *)(param_1 + 0x6b5) = *(byte *)(param_1 + 0x6b5) & 0xfd;
        *(undefined2 *)(param_1 + 0x74a) = 0x18;
        local_20 = 0x10;
        FUN_00375ed8(param_1,0x400000,200,0);
        iVar5 = FUN_00375eb8(param_1);
        if (iVar5 == 0) {
          FUN_00375b70(param_2,param_1);
          uVar4 = DAT_001bb428;
          uVar3 = DAT_001bb420;
          fVar2 = DAT_001bb41c;
          if ((*(ushort *)(param_1 + 0x1c) & 0xe000) == 0) {
            *(undefined4 *)(param_1 + 200) = DAT_001bb424;
            *(undefined4 *)(param_1 + 0xcc) = uVar4;
            uVar3 = DAT_001bb42c;
            *(undefined1 *)(param_1 + 0xd0) = 0xff;
            *(undefined4 *)(param_1 + 0x70) = uVar3;
            *(undefined2 *)(param_1 + 0x742) = 2;
            *(undefined4 *)(param_1 + 0x6a0) = DAT_001bb430;
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
          }
          else {
            *(undefined4 *)(param_1 + 0x1e4) = DAT_001bb410;
            fVar8 = DAT_001bb414;
            if ((*(uint *)(param_2 + 0xf8) & 1) == 0) {
              fVar8 = DAT_001bb418;
            }
            *(float *)(param_1 + 0x7b8) = fVar8 * fVar2;
            *(undefined2 *)(param_1 + 0x74c) = 0xf;
            *(undefined2 *)(param_1 + 0x742) = 1;
            *(undefined4 *)(param_1 + 0x6a0) = uVar3;
          }
          FUN_00375bcc(param_1,DAT_001bb434);
        }
        else {
          FUN_00375bcc(param_1,DAT_001bb40c);
        }
        goto LAB_001bb30c;
      }
    }
  }
  else if (*(short *)(param_1 + 0x74a) == 0) goto LAB_001bb1d4;
  if ((*(short *)(param_1 + 0x748) == 0) && ((*(byte *)(param_1 + 0x6b4) & 2) != 0)) {
    *(undefined2 *)(param_1 + 0x748) = 0x2d;
  }
LAB_001bb30c:
  (**(code **)(param_1 + 0x6a0))(param_1,param_2);
  iVar5 = FUN_003415a8(param_1,param_2);
  if (iVar5 == 0) {
    if (((*(ushort *)(param_1 + 0x1c) & 0xe000) == 0) || (*(int *)(param_1 + 0x6a0) == DAT_001bb438)
       ) {
      iVar5 = param_1 + 0x6a4;
      iVar6 = param_2 + 0x5c78;
      if (((*(short *)(param_1 + 0x748) == 0) ||
          (sVar1 = *(short *)(param_1 + 0x748) + -1, *(short *)(param_1 + 0x748) = sVar1, sVar1 == 0
          )) && (*(char *)(param_1 + 0xb7) != '\0')) {
        FUN_003761f0(param_2,iVar6,iVar5);
      }
      if (((*(short *)(param_1 + 0x74a) == 0) ||
          (sVar1 = *(short *)(param_1 + 0x74a) + -1, *(short *)(param_1 + 0x74a) = sVar1, sVar1 == 0
          )) && (*(char *)(param_1 + 0xb7) != '\0')) {
        FUN_00376168(param_2,iVar6,iVar5);
      }
      FUN_003762a4(param_2,iVar6,iVar5,local_20);
      return;
    }
    if (*(short *)(param_1 + 0x74a) != 0) {
      *(short *)(param_1 + 0x74a) = *(short *)(param_1 + 0x74a) + -1;
    }
  }
  return;
}
