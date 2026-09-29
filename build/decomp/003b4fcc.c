// OoT3D decomp @ 003b4fcc  name=FUN_003b4fcc  size=416

void FUN_003b4fcc(int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;

  if (((*(short *)(param_1 + 0x280) == 0) ||
      (sVar1 = *(short *)(param_1 + 0x280) + -1, *(short *)(param_1 + 0x280) = sVar1, sVar1 == 0))
     && (iVar3 = DAT_003b516c, *(int *)(param_1 + 0x1a4) != DAT_003b516c)) {
    if ((*(byte *)(param_1 + 0x1bb) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x1b9) & 2) == 0) {
        bVar2 = false;
      }
      else {
        *(byte *)(param_1 + 0x1b9) = *(byte *)(param_1 + 0x1b9) & 0xfd;
        uVar6 = DAT_003b5180;
        uVar5 = DAT_003b517c;
        fVar4 = DAT_003b5178;
        if ((*(byte *)(*(int *)(param_1 + 0x1c4) + 0x66) & 2) == 0) {
          bVar2 = true;
          *(undefined2 *)(param_1 + 0x280) = 0xc;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x1b0);
          bVar2 = false;
          *(float *)(param_1 + 0x268) = *(float *)(iVar7 + 0x60) * DAT_003b5178;
          *(float *)(param_1 + 0x26c) = *(float *)(iVar7 + 100) * fVar4;
          *(float *)(param_1 + 0x270) = *(float *)(iVar7 + 0x68) * fVar4;
          *(undefined4 *)(param_1 + 0x288) = uVar5;
          *(undefined4 *)(param_1 + 0x28c) = uVar6;
        }
      }
      if (!bVar2) goto LAB_003b511c;
    }
    else {
      *(byte *)(param_1 + 0x1bb) = *(byte *)(param_1 + 0x1bb) & 0xfe;
      (**(code **)(DAT_003b5170 + param_2))(param_2,-(uint)*(byte *)(*(int *)(param_1 + 0x1c4) + 5))
      ;
      FUN_0035e6e0(DAT_003b5174,DAT_003b5174,param_2,param_1,(int)*(short *)(param_1 + 0x92));
      *(undefined2 *)(param_1 + 0x280) = 0xc;
    }
    uVar5 = DAT_003b5184;
    puVar8 = *(undefined4 **)(param_1 + 0x1c4);
    *puVar8 = 8;
    *(undefined1 *)(puVar8 + 1) = 0;
    *(undefined1 *)((int)puVar8 + 5) = 4;
    *(undefined1 *)((int)puVar8 + 0x15) = 1;
    *(undefined4 *)(param_1 + 100) = uVar5;
    *(undefined2 *)(param_1 + 0x282) = 9;
    *(int *)(param_1 + 0x1a4) = iVar3;
    return;
  }
LAB_003b511c:
  FUN_001323c0(param_1,param_2);
  *(float *)(param_1 + 0xc4) = (*(float *)(param_1 + 0x29c) + DAT_003b5188) * DAT_003b518c;
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
  return;
}
