// OoT3D decomp @ 0026a30c  name=FUN_0026a30c  size=616

void FUN_0026a30c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;
  undefined4 uVar10;
  
  puVar6 = *(ushort **)(iRam0026a574 + param_2);
  iVar3 = FUN_0037571c(param_2);
  uVar2 = uRam0026a588;
  uVar10 = uRam0026a584;
  iVar1 = iRam0026a578;
  uVar5 = 0;
  if (iVar3 == 3) {
    *(undefined4 *)(param_1 + 0xe70) = 1;
    *(undefined2 *)(param_1 + 0x1c) = 10;
    *(undefined1 *)(param_1 + 0x1a4) = 2;
    if (*(char *)(iVar1 + 10) != '\0') {
      *(undefined4 *)(param_1 + 0x1a8) = 0;
      *(undefined4 *)(param_1 + 0x1ac) = 0;
    }
    *(undefined1 *)(param_1 + 0xeb6) = 2;
    *(undefined1 *)(param_1 + 0x1a4) = 0;
    *(byte *)(param_1 + 0xeee) = *(byte *)(param_1 + 0xeee) & 0xfe;
    *(byte *)(param_1 + 0xf46) = *(byte *)(param_1 + 0xf46) & 0xfe;
    *(byte *)(param_1 + 0xf9e) = *(byte *)(param_1 + 0xf9e) & 0xfe;
    *(undefined1 *)(param_1 + 0xe74) = 0;
  }
  else if (puVar6 != (ushort *)0x0) {
    bVar7 = *(short *)(param_2 + 0x104) == 0x51;
    bVar8 = (*(uint *)(iRam0026a57c + 8) & 0xf) == 0xd;
    bVar9 = bVar7 && bVar8;
    if (bVar7 && bVar8) {
      bVar9 = *(int *)(param_1 + 500) == 9;
    }
    bVar7 = false;
    if (bVar9) {
      bVar7 = *(short *)(iRam0026a580 + param_2) == 0x45;
    }
    if (((bVar7) && (*(char *)(param_1 + 0x1006) != '\0')) && (*(char *)(param_1 + 0x1005) == '\0'))
    {
      *(undefined1 *)(param_1 + 0x1005) = 1;
      FUN_0037547c(uRam0026a58c,param_1 + 0x28,4,uVar2,uVar2,uVar10);
      FUN_0037547c(uRam0026a590,param_1 + 0x28,4,uRam0026a588,uRam0026a588,uRam0026a584);
      *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffffffb;
    }
    uVar4 = (uint)*puVar6;
    if (*puRam0026a594 == uVar4) {
      uVar5 = (uint)(byte)puRam0026a594[1];
    }
    else if ((int)*puRam0026a594 <= (int)uVar4) {
      if (puRam0026a594[2] == uVar4) {
        uVar5 = (uint)(byte)puRam0026a594[3];
      }
      else if ((int)puRam0026a594[2] <= (int)uVar4) {
        if (puRam0026a594[4] == uVar4) {
          uVar5 = (uint)(byte)puRam0026a594[5];
        }
        else if ((int)puRam0026a594[4] <= (int)uVar4) {
          if (puRam0026a594[6] == uVar4) {
            uVar5 = (uint)(byte)puRam0026a594[7];
          }
          else {
            bVar9 = false;
            if ((int)puRam0026a594[6] <= (int)uVar4) {
              bVar9 = puRam0026a594[8] == uVar4;
            }
            if (bVar9) {
              uVar5 = (uint)(byte)puRam0026a594[9];
            }
          }
        }
      }
    }
    if (uVar5 != 0) {
      if (*(byte *)(param_1 + 0x100e) != uVar5) {
        if (*(byte *)(param_1 + 0x100e) == 0) {
          uVar10 = VectorSignedToFloat(*(undefined4 *)(puVar6 + 6),(byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(param_1 + 0x28) = uVar10;
          uVar10 = VectorSignedToFloat(*(undefined4 *)(puVar6 + 8),(byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(param_1 + 0x2c) = uVar10;
          uVar10 = VectorSignedToFloat(*(undefined4 *)(puVar6 + 10),(byte)(in_fpscr >> 0x15) & 3);
          *(undefined4 *)(param_1 + 0x30) = uVar10;
          *(ushort *)(param_1 + 0x36) = puVar6[4];
          *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
          *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
          *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
          *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x28);
          *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x30);
        }
        iVar1 = iRam0026a598;
        *(char *)(param_1 + 0x100e) = (char)uVar5;
        (**(code **)(iVar1 + uVar5 * 4))(param_1,param_2,puVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x0026a570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iRam0026a59c + (uint)*(byte *)(param_1 + 0x100e) * 4))(param_1,param_2,puVar6);
      return;
    }
  }
  return;
}

