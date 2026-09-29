// OoT3D decomp @ 004a5708  name=FUN_004a5708  size=624

void FUN_004a5708(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;

  if (*(int *)(param_1 + 0x58) != 0) {
    iVar1 = 0;
    do {
      if ((*(uint *)(param_3 + iVar1 * 0x10 + 4) & 1) != 0) {
        switch(param_2) {
        case 0:
          iVar2 = param_3 + iVar1 * 0x10;
          *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + *(int *)(*(int *)(param_1 + 0x58) + 4);
          break;
        case 1:
          iVar2 = param_3 + iVar1 * 0x10;
          *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + *(int *)(*(int *)(param_1 + 0x58) + 8);
          break;
        case 2:
          iVar2 = param_3 + iVar1 * 0x10;
          *(float *)(iVar2 + 8) = *(float *)(iVar2 + 8) + *(float *)(*(int *)(param_1 + 0x58) + 0xc)
          ;
          break;
        case 3:
          iVar2 = param_3 + iVar1 * 0x10;
          *(float *)(iVar2 + 8) =
               *(float *)(iVar2 + 8) + *(float *)(*(int *)(param_1 + 0x58) + 0x10);
          break;
        case 4:
          iVar2 = param_3 + iVar1 * 0x10;
          *(float *)(iVar2 + 8) =
               *(float *)(iVar2 + 8) + *(float *)(*(int *)(param_1 + 0x58) + 0x14);
          break;
        case 5:
          iVar2 = param_3 + iVar1 * 0x10;
          *(float *)(iVar2 + 8) =
               *(float *)(iVar2 + 8) + *(float *)(*(int *)(param_1 + 0x58) + 0x18);
          break;
        case 6:
          iVar2 = param_3 + iVar1 * 0x10;
          *(float *)(iVar2 + 8) =
               *(float *)(iVar2 + 8) + *(float *)(*(int *)(param_1 + 0x58) + 0x1c);
          break;
        case 7:
          iVar2 = param_3 + iVar1 * 0x10;
          *(float *)(iVar2 + 8) =
               *(float *)(iVar2 + 8) + *(float *)(*(int *)(param_1 + 0x58) + 0x20);
          break;
        case 8:
          iVar2 = param_3 + iVar1 * 0x10;
          *(float *)(iVar2 + 8) =
               *(float *)(iVar2 + 8) + *(float *)(*(int *)(param_1 + 0x58) + 0x24);
          break;
        case 9:
          iVar2 = param_3 + iVar1 * 0x10;
          *(float *)(iVar2 + 8) =
               *(float *)(iVar2 + 8) + *(float *)(*(int *)(param_1 + 0x58) + 0x28);
          break;
        case 10:
          iVar2 = param_3 + iVar1 * 0x10;
          *(uint *)(iVar2 + 0xc) =
               *(int *)(iVar2 + 0xc) + (uint)*(byte *)(*(int *)(param_1 + 0x58) + 0x2c);
          break;
        case 0xb:
          iVar2 = param_3 + iVar1 * 0x10;
          *(uint *)(iVar2 + 0xc) =
               *(int *)(iVar2 + 0xc) + (uint)*(byte *)(*(int *)(param_1 + 0x58) + 0x2d);
          break;
        case 0xc:
          iVar2 = param_3 + iVar1 * 0x10;
          *(uint *)(iVar2 + 0xc) =
               *(int *)(iVar2 + 0xc) + (uint)*(byte *)(*(int *)(param_1 + 0x58) + 0x2e);
          break;
        case 0xd:
          iVar2 = param_3 + iVar1 * 0x10;
          *(uint *)(iVar2 + 0xc) =
               *(int *)(iVar2 + 0xc) + (uint)*(byte *)(*(int *)(param_1 + 0x58) + 0x2f);
          break;
        case 0xe:
          iVar2 = param_3 + iVar1 * 0x10;
          *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + *(int *)(*(int *)(param_1 + 0x58) + 0x30);
          break;
        case 0xf:
          iVar2 = param_3 + iVar1 * 0x10;
          *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + *(int *)(*(int *)(param_1 + 0x58) + 0x34);
          break;
        case 0x10:
          iVar2 = param_3 + iVar1 * 0x10;
          *(uint *)(iVar2 + 0xc) =
               *(int *)(iVar2 + 0xc) + (uint)*(byte *)(*(int *)(param_1 + 0x58) + 0x38);
          break;
        case 0x11:
          iVar2 = param_3 + iVar1 * 0x10;
          *(uint *)(iVar2 + 0xc) =
               *(int *)(iVar2 + 0xc) + (uint)*(byte *)(*(int *)(param_1 + 0x58) + 0x39);
          break;
        case 0x12:
          iVar2 = param_3 + iVar1 * 0x10;
          *(uint *)(iVar2 + 0xc) =
               *(int *)(iVar2 + 0xc) + (uint)*(byte *)(*(int *)(param_1 + 0x58) + 0x3a);
          break;
        case 0x13:
          iVar2 = param_3 + iVar1 * 0x10;
          *(uint *)(iVar2 + 0xc) =
               *(int *)(iVar2 + 0xc) + (uint)*(byte *)(*(int *)(param_1 + 0x58) + 0x3b);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
  }
  return;
}
